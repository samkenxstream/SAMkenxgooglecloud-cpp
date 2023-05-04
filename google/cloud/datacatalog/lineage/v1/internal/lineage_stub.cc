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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datacatalog/lineage/v1/lineage.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LineageStub::~LineageStub() = default;

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
DefaultLineageStub::CreateProcess(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::Process response;
  auto status = grpc_stub_->CreateProcess(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
DefaultLineageStub::UpdateProcess(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::Process response;
  auto status = grpc_stub_->UpdateProcess(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
DefaultLineageStub::GetProcess(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const& request) {
  google::cloud::datacatalog::lineage::v1::Process response;
  auto status = grpc_stub_->GetProcess(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListProcessesResponse>
DefaultLineageStub::ListProcesses(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::ListProcessesRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::ListProcessesResponse response;
  auto status = grpc_stub_->ListProcesses(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLineageStub::AsyncDeleteProcess(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datacatalog::lineage::v1::DeleteProcessRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteProcess(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
DefaultLineageStub::CreateRun(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const& request) {
  google::cloud::datacatalog::lineage::v1::Run response;
  auto status = grpc_stub_->CreateRun(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
DefaultLineageStub::UpdateRun(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const& request) {
  google::cloud::datacatalog::lineage::v1::Run response;
  auto status = grpc_stub_->UpdateRun(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
DefaultLineageStub::GetRun(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::GetRunRequest const& request) {
  google::cloud::datacatalog::lineage::v1::Run response;
  auto status = grpc_stub_->GetRun(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListRunsResponse>
DefaultLineageStub::ListRuns(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::ListRunsRequest const& request) {
  google::cloud::datacatalog::lineage::v1::ListRunsResponse response;
  auto status = grpc_stub_->ListRuns(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLineageStub::AsyncDeleteRun(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datacatalog::lineage::v1::DeleteRunRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRun(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
DefaultLineageStub::CreateLineageEvent(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::LineageEvent response;
  auto status =
      grpc_stub_->CreateLineageEvent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
DefaultLineageStub::GetLineageEvent(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::LineageEvent response;
  auto status =
      grpc_stub_->GetLineageEvent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse>
DefaultLineageStub::ListLineageEvents(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::ListLineageEventsRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::ListLineageEventsResponse response;
  auto status =
      grpc_stub_->ListLineageEvents(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultLineageStub::DeleteLineageEvent(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteLineageEvent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::datacatalog::lineage::v1::SearchLinksResponse>
DefaultLineageStub::SearchLinks(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::SearchLinksRequest const&
        request) {
  google::cloud::datacatalog::lineage::v1::SearchLinksResponse response;
  auto status = grpc_stub_->SearchLinks(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse>
DefaultLineageStub::BatchSearchLinkProcesses(
    grpc::ClientContext& client_context,
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest const& request) {
  google::cloud::datacatalog::lineage::v1::BatchSearchLinkProcessesResponse
      response;
  auto status =
      grpc_stub_->BatchSearchLinkProcesses(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultLineageStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultLineageStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1_internal
}  // namespace cloud
}  // namespace google
