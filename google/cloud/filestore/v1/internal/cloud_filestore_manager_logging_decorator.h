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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_LOGGING_DECORATOR_H

#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace filestore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudFilestoreManagerLogging : public CloudFilestoreManagerStub {
 public:
  ~CloudFilestoreManagerLogging() override = default;
  CloudFilestoreManagerLogging(std::shared_ptr<CloudFilestoreManagerStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  StatusOr<google::cloud::filestore::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::UpdateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::RestoreInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListSnapshotsResponse> ListSnapshots(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListSnapshotsRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::Snapshot> GetSnapshot(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetSnapshotRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::CreateSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::DeleteSnapshotRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSnapshot(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::UpdateSnapshotRequest const& request)
      override;

  StatusOr<google::cloud::filestore::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::filestore::v1::Backup> GetBackup(
      grpc::ClientContext& context,
      google::cloud::filestore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::filestore::v1::UpdateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudFilestoreManagerStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // CloudFilestoreManagerLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FILESTORE_V1_INTERNAL_CLOUD_FILESTORE_MANAGER_LOGGING_DECORATOR_H
