// Copyright 2023 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/devtools/cloudtrace/v1/trace.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudtrace/v1/trace.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace trace_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TraceServiceStub {
 public:
  virtual ~TraceServiceStub() = 0;

  virtual StatusOr<google::devtools::cloudtrace::v1::ListTracesResponse>
  ListTraces(
      grpc::ClientContext& context,
      google::devtools::cloudtrace::v1::ListTracesRequest const& request) = 0;

  virtual StatusOr<google::devtools::cloudtrace::v1::Trace> GetTrace(
      grpc::ClientContext& context,
      google::devtools::cloudtrace::v1::GetTraceRequest const& request) = 0;

  virtual Status PatchTraces(
      grpc::ClientContext& context,
      google::devtools::cloudtrace::v1::PatchTracesRequest const& request) = 0;
};

class DefaultTraceServiceStub : public TraceServiceStub {
 public:
  explicit DefaultTraceServiceStub(
      std::unique_ptr<
          google::devtools::cloudtrace::v1::TraceService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::devtools::cloudtrace::v1::ListTracesResponse> ListTraces(
      grpc::ClientContext& client_context,
      google::devtools::cloudtrace::v1::ListTracesRequest const& request)
      override;

  StatusOr<google::devtools::cloudtrace::v1::Trace> GetTrace(
      grpc::ClientContext& client_context,
      google::devtools::cloudtrace::v1::GetTraceRequest const& request)
      override;

  Status PatchTraces(grpc::ClientContext& client_context,
                     google::devtools::cloudtrace::v1::PatchTracesRequest const&
                         request) override;

 private:
  std::unique_ptr<google::devtools::cloudtrace::v1::TraceService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_STUB_H
