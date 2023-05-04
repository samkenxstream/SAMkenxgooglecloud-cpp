// Copyright 2022 Google LLC
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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#include "google/cloud/dialogflow_es/internal/conversation_datasets_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationDatasetsTracingStub::ConversationDatasetsTracingStub(
    std::shared_ptr<ConversationDatasetsStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
ConversationDatasetsTracingStub::AsyncCreateConversationDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationDatasets",
                             "CreateConversationDataset");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateConversationDataset(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
ConversationDatasetsTracingStub::GetConversationDataset(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationDatasets",
                             "GetConversationDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetConversationDataset(context, request));
}

StatusOr<google::cloud::dialogflow::v2::ListConversationDatasetsResponse>
ConversationDatasetsTracingStub::ListConversationDatasets(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationDatasetsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationDatasets",
                             "ListConversationDatasets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListConversationDatasets(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConversationDatasetsTracingStub::AsyncDeleteConversationDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationDatasets",
                             "DeleteConversationDataset");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteConversationDataset(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationDatasetsTracingStub::AsyncImportConversationData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ImportConversationDataRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationDatasets",
                             "ImportConversationData");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncImportConversationData(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationDatasetsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ConversationDatasetsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ConversationDatasetsStub> MakeConversationDatasetsTracingStub(
    std::shared_ptr<ConversationDatasetsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConversationDatasetsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
