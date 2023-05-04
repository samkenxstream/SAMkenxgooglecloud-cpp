// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/logging_decorator_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/descriptor_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "absl/strings/str_split.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

LoggingDecoratorGenerator::LoggingDecoratorGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : StubGeneratorBase("logging_header_path", "logging_cc_path",
                        service_descriptor, std::move(service_vars),
                        std::move(service_method_vars), context) {}

Status LoggingDecoratorGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"),
                       "google/cloud/tracing_options.h",
                       "google/cloud/version.h"});
  HeaderSystemIncludes(
      {HasLongrunningMethod() ? "google/longrunning/operations.grpc.pb.h" : "",
       "memory", "set", "string"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // Abstract interface Logging base class
  HeaderPrint(  // clang-format off
    "\n"
    "class $logging_class_name$ : public $stub_class_name$ {\n"
    " public:\n"
    "  ~$logging_class_name$() override = default;\n"
    "  $logging_class_name$(std::shared_ptr<$stub_class_name$> child,\n"
    "                       TracingOptions tracing_options,\n"
    "                       std::set<std::string> components);\n");
  // clang-format on

  HeaderPrintPublicMethods();

  HeaderPrint(  // clang-format off
    "\n"
    " private:\n"
    "  std::shared_ptr<$stub_class_name$> child_;\n"
    "  TracingOptions tracing_options_;\n"
    "  std::set<std::string> components_;\n"
    "};  // $logging_class_name$\n");
  // clang-format on

  HeaderCloseNamespaces();
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status LoggingDecoratorGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes(
      {vars("logging_header_path"), "google/cloud/internal/log_wrapper.h",
       HasStreamingReadMethod()
           ? "google/cloud/internal/streaming_read_rpc_logging.h"
           : "",
       HasStreamingWriteMethod()
           ? "google/cloud/internal/streaming_write_rpc_logging.h"
           : "",
       HasBidirStreamingMethod()
           ? "google/cloud/internal/async_read_write_stream_logging.h"
           : "",
       HasAsynchronousStreamingReadMethod()
           ? "google/cloud/internal/async_streaming_read_rpc_logging.h"
           : "",
       HasAsynchronousStreamingWriteMethod()
           ? "google/cloud/internal/async_streaming_write_rpc_logging.h"
           : "",
       "google/cloud/status_or.h"});
  CcSystemIncludes({vars("proto_grpc_header_path"), "memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(  // clang-format off
    "\n"
    "$logging_class_name$::$logging_class_name$(\n"
    "    std::shared_ptr<$stub_class_name$> child,\n"
    "    TracingOptions tracing_options,\n"
    "    std::set<std::string> components)\n"
    "    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),\n"
    "      components_(std::move(components)) {}\n");
  // clang-format on

  // logging decorator class member methods
  for (auto const& method : methods()) {
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    $request_type$,
    $response_type$>>
$logging_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context) {
  using LoggingStream = ::google::cloud::internal::StreamingWriteRpcLogging<
      $request_type$, $response_type$>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->$method_name$(std::move(context));
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    $request_type$,
    $response_type$>>
$logging_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using LoggingStream =
     ::google::cloud::internal::AsyncStreamingReadWriteRpcLogging<$request_type$, $response_type$>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->Async$method_name$(cq, std::move(context));
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}
)""");
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern(
             {{IsResponseTypeEmpty,
               // clang-format off
    "\nStatus\n",
    "\nStatusOr<$response_type$>\n"},
    {
    "$logging_class_name$::$method_name$(\n"
    "    grpc::ClientContext& context,\n"
    "    $request_type$ const& request) {\n"
    "  return google::cloud::internal::LogWrapper(\n"
    "      [this](grpc::ClientContext& context,\n"
    "             $request_type$ const& request) {\n"
    "        return child_->$method_name$(context, request);\n"
    "      },\n"
    "      context, request, __func__, tracing_options_);\n"
    "}\n"}},
             // clang-format on
             And(IsNonStreaming, Not(IsLongrunningOperation))),
         MethodPattern({{R"""(
future<StatusOr<google::longrunning::Operation>>
$logging_class_name$::Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             $request_type$ const& request) {
        return child_->Async$method_name$(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}
)"""}},
                       IsLongrunningOperation),
         MethodPattern(
             {// clang-format off}
              {"\n"
               "std::unique_ptr<google::cloud::internal::StreamingReadRpc<$"
               "response_type$>>\n"
               "$logging_class_name$::$method_name$(\n"
               "    std::shared_ptr<grpc::ClientContext> context,\n"
               "    $request_type$ const& request) {\n"
               "  return google::cloud::internal::LogWrapper(\n"
               "      [this](std::shared_ptr<grpc::ClientContext> context,\n"
               "             $request_type$ const& request) ->\n"
               "      "
               "std::unique_ptr<google::cloud::internal::StreamingReadRpc<\n"
               "          $response_type$>> {\n"
               "        auto stream = "
               "child_->$method_name$(std::move(context), request);\n"
               "        if (components_.count(\"rpc-streams\") > 0) {\n"
               "          stream = "
               "std::make_unique<google::cloud::internal::"
               "StreamingReadRpcLogging<\n"
               "             $response_type$>>(\n"
               "               std::move(stream), tracing_options_,\n"
               "               "
               "google::cloud::internal::RequestIdForLogging());\n"
               "        }\n"
               "        return stream;\n"
               "      },\n"
               "      std::move(context), request, __func__, "
               "tracing_options_);\n"
               "}\n"}},
             // clang-format on
             IsStreamingRead)},
        __FILE__, __LINE__);
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) {
      auto constexpr kDefinition = R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    $response_type$>>
$logging_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  using LoggingStream =
     ::google::cloud::internal::AsyncStreamingReadRpcLogging<$response_type$>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->Async$method_name$(cq, std::move(context), request);
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}
)""";
      CcPrintMethod(method, __FILE__, __LINE__, kDefinition);
      continue;
    }
    if (IsStreamingWrite(method)) {
      auto constexpr kDefinition = R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    $request_type$, $response_type$>>
$logging_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using LoggingStream = ::google::cloud::internal::AsyncStreamingWriteRpcLogging<
      $request_type$, $response_type$>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->Async$method_name$(cq, std::move(context));
  if (components_.count("rpc-streams") > 0) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}
)""";
      CcPrintMethod(method, __FILE__, __LINE__, kDefinition);
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern(
            {{IsResponseTypeEmpty,
              // clang-format off
    "\nfuture<Status>\n",
    "\nfuture<StatusOr<$response_type$>>\n"},
    {R"""($logging_class_name$::Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             $request_type$ const& request) {
        return child_->Async$method_name$(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}
)"""}},
            // clang-format on
            And(IsNonStreaming, Not(IsLongrunningOperation)))},
        __FILE__, __LINE__);
  }

  // long running operation support methods
  if (HasLongrunningMethod()) {
    CcPrint(R"""(
future<StatusOr<google::longrunning::Operation>>
$logging_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> $logging_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}
)""");
  }

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
