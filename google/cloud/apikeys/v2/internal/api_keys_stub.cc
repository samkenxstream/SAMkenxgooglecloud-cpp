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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/internal/api_keys_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/api/apikeys/v2/apikeys.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace apikeys_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ApiKeysStub::~ApiKeysStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultApiKeysStub::AsyncCreateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::CreateKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::api::apikeys::v2::CreateKeyRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::apikeys::v2::CreateKeyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateKey(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::apikeys::v2::ListKeysResponse>
DefaultApiKeysStub::ListKeys(
    grpc::ClientContext& client_context,
    google::api::apikeys::v2::ListKeysRequest const& request) {
  google::api::apikeys::v2::ListKeysResponse response;
  auto status = grpc_stub_->ListKeys(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::apikeys::v2::Key> DefaultApiKeysStub::GetKey(
    grpc::ClientContext& client_context,
    google::api::apikeys::v2::GetKeyRequest const& request) {
  google::api::apikeys::v2::Key response;
  auto status = grpc_stub_->GetKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::apikeys::v2::GetKeyStringResponse>
DefaultApiKeysStub::GetKeyString(
    grpc::ClientContext& client_context,
    google::api::apikeys::v2::GetKeyStringRequest const& request) {
  google::api::apikeys::v2::GetKeyStringResponse response;
  auto status = grpc_stub_->GetKeyString(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiKeysStub::AsyncUpdateKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::UpdateKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::api::apikeys::v2::UpdateKeyRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::apikeys::v2::UpdateKeyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateKey(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiKeysStub::AsyncDeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::DeleteKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::api::apikeys::v2::DeleteKeyRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::apikeys::v2::DeleteKeyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteKey(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiKeysStub::AsyncUndeleteKey(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::api::apikeys::v2::UndeleteKeyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::api::apikeys::v2::UndeleteKeyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::api::apikeys::v2::UndeleteKeyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteKey(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::api::apikeys::v2::LookupKeyResponse>
DefaultApiKeysStub::LookupKey(
    grpc::ClientContext& client_context,
    google::api::apikeys::v2::LookupKeyRequest const& request) {
  google::api::apikeys::v2::LookupKeyResponse response;
  auto status = grpc_stub_->LookupKey(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultApiKeysStub::AsyncGetOperation(
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

future<Status> DefaultApiKeysStub::AsyncCancelOperation(
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
}  // namespace apikeys_v2_internal
}  // namespace cloud
}  // namespace google
