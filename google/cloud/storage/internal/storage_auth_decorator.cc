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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_auth_decorator.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageAuth::StorageAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<StorageStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::storage::v2::Object> StorageAuth::GetObject(
    grpc::ClientContext& context,
    google::storage::v2::GetObjectRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetObject(context, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageAuth::ReadObject(std::unique_ptr<grpc::ClientContext> context,
                        google::storage::v2::ReadObjectRequest const& request) {
  using ErrorStream = ::google::cloud::internal::StreamingReadRpcError<
      google::storage::v2::ReadObjectResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->ReadObject(std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageAuth::WriteObject(std::unique_ptr<grpc::ClientContext> context) {
  using ErrorStream = ::google::cloud::internal::StreamingWriteRpcError<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>;
  auto status = auth_->ConfigureContext(*context);
  if (!status.ok()) return absl::make_unique<ErrorStream>(std::move(status));
  return child_->WriteObject(std::move(context));
}

StatusOr<google::storage::v2::ListObjectsResponse> StorageAuth::ListObjects(
    grpc::ClientContext& context,
    google::storage::v2::ListObjectsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListObjects(context, request);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageAuth::StartResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartResumableWrite(context, request);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageAuth::QueryWriteStatus(
    grpc::ClientContext& context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryWriteStatus(context, request);
}

StatusOr<google::storage::v2::ServiceAccount> StorageAuth::GetServiceAccount(
    grpc::ClientContext& context,
    google::storage::v2::GetServiceAccountRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServiceAccount(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
