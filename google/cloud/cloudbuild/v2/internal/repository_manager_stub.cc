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
// source: google/devtools/cloudbuild/v2/repositories.proto

#include "google/cloud/cloudbuild/v2/internal/repository_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudbuild/v2/repositories.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RepositoryManagerStub::~RepositoryManagerStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::CreateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::CreateConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnection(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
DefaultRepositoryManagerStub::GetConnection(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request) {
  google::devtools::cloudbuild::v2::Connection response;
  auto status = grpc_stub_->GetConnection(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
DefaultRepositoryManagerStub::ListConnections(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::ListConnectionsRequest const& request) {
  google::devtools::cloudbuild::v2::ListConnectionsResponse response;
  auto status =
      grpc_stub_->ListConnections(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::UpdateConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::DeleteConnectionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnection(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::CreateRepositoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRepository(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncBatchCreateRepositories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::
                 BatchCreateRepositoriesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateRepositories(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
DefaultRepositoryManagerStub::GetRepository(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request) {
  google::devtools::cloudbuild::v2::Repository response;
  auto status = grpc_stub_->GetRepository(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
DefaultRepositoryManagerStub::ListRepositories(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request) {
  google::devtools::cloudbuild::v2::ListRepositoriesResponse response;
  auto status =
      grpc_stub_->ListRepositories(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::devtools::cloudbuild::v2::DeleteRepositoryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRepository(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
DefaultRepositoryManagerStub::FetchReadWriteToken(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
        request) {
  google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse response;
  auto status =
      grpc_stub_->FetchReadWriteToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
DefaultRepositoryManagerStub::FetchReadToken(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request) {
  google::devtools::cloudbuild::v2::FetchReadTokenResponse response;
  auto status = grpc_stub_->FetchReadToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
DefaultRepositoryManagerStub::FetchLinkableRepositories(
    grpc::ClientContext& client_context,
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
        request) {
  google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse response;
  auto status = grpc_stub_->FetchLinkableRepositories(&client_context, request,
                                                      &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultRepositoryManagerStub::AsyncGetOperation(
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

future<Status> DefaultRepositoryManagerStub::AsyncCancelOperation(
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
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google
