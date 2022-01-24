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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_STORAGE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_STORAGE_LOGGING_DECORATOR_H

#include "google/cloud/storage/internal/storage_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageLogging : public StorageStub {
 public:
  ~StorageLogging() override = default;
  StorageLogging(std::shared_ptr<StorageStub> child,
                 TracingOptions tracing_options,
                 std::set<std::string> components);

  StatusOr<google::storage::v2::Object> GetObject(
      grpc::ClientContext& context,
      google::storage::v2::GetObjectRequest const& request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::storage::v2::ReadObjectResponse>>
  ReadObject(std::unique_ptr<grpc::ClientContext> context,
             google::storage::v2::ReadObjectRequest const& request) override;

  std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>>
  WriteObject(std::unique_ptr<grpc::ClientContext> context) override;

  StatusOr<google::storage::v2::ListObjectsResponse> ListObjects(
      grpc::ClientContext& context,
      google::storage::v2::ListObjectsRequest const& request) override;

  StatusOr<google::storage::v2::StartResumableWriteResponse>
  StartResumableWrite(
      grpc::ClientContext& context,
      google::storage::v2::StartResumableWriteRequest const& request) override;

  StatusOr<google::storage::v2::QueryWriteStatusResponse> QueryWriteStatus(
      grpc::ClientContext& context,
      google::storage::v2::QueryWriteStatusRequest const& request) override;

  StatusOr<google::storage::v2::ServiceAccount> GetServiceAccount(
      grpc::ClientContext& context,
      google::storage::v2::GetServiceAccountRequest const& request) override;

 private:
  std::shared_ptr<StorageStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // StorageLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_INTERNAL_STORAGE_LOGGING_DECORATOR_H
