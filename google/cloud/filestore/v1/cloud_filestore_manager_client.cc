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

#include "google/cloud/filestore/v1/cloud_filestore_manager_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace filestore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFilestoreManagerClient::CloudFilestoreManagerClient(
    std::shared_ptr<CloudFilestoreManagerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
CloudFilestoreManagerClient::~CloudFilestoreManagerClient() = default;

StreamRange<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerClient::ListInstances(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerClient::ListInstances(
    google::cloud::filestore::v1::ListInstancesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerClient::GetInstance(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerClient::GetInstance(
    google::cloud::filestore::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerClient::CreateInstance(
    std::string const& parent,
    google::cloud::filestore::v1::Instance const& instance,
    std::string const& instance_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  *request.mutable_instance() = instance;
  request.set_instance_id(instance_id);
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerClient::CreateInstance(
    google::cloud::filestore::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerClient::UpdateInstance(
    google::cloud::filestore::v1::Instance const& instance,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerClient::UpdateInstance(
    google::cloud::filestore::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerClient::RestoreInstance(
    google::cloud::filestore::v1::RestoreInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RestoreInstance(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteInstance(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteInstance(
    google::cloud::filestore::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

StreamRange<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerClient::ListSnapshots(std::string const& parent,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::ListSnapshotsRequest request;
  request.set_parent(parent);
  return connection_->ListSnapshots(request);
}

StreamRange<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerClient::ListSnapshots(
    google::cloud::filestore::v1::ListSnapshotsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSnapshots(std::move(request));
}

StatusOr<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerClient::GetSnapshot(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::GetSnapshotRequest request;
  request.set_name(name);
  return connection_->GetSnapshot(request);
}

StatusOr<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerClient::GetSnapshot(
    google::cloud::filestore::v1::GetSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSnapshot(request);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerClient::CreateSnapshot(
    std::string const& parent,
    google::cloud::filestore::v1::Snapshot const& snapshot,
    std::string const& snapshot_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::CreateSnapshotRequest request;
  request.set_parent(parent);
  *request.mutable_snapshot() = snapshot;
  request.set_snapshot_id(snapshot_id);
  return connection_->CreateSnapshot(request);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerClient::CreateSnapshot(
    google::cloud::filestore::v1::CreateSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSnapshot(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteSnapshot(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::DeleteSnapshotRequest request;
  request.set_name(name);
  return connection_->DeleteSnapshot(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteSnapshot(
    google::cloud::filestore::v1::DeleteSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSnapshot(request);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerClient::UpdateSnapshot(
    google::cloud::filestore::v1::Snapshot const& snapshot,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::UpdateSnapshotRequest request;
  *request.mutable_snapshot() = snapshot;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSnapshot(request);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerClient::UpdateSnapshot(
    google::cloud::filestore::v1::UpdateSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSnapshot(request);
}

StreamRange<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerClient::ListBackups(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::ListBackupsRequest request;
  request.set_parent(parent);
  return connection_->ListBackups(request);
}

StreamRange<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerClient::ListBackups(
    google::cloud::filestore::v1::ListBackupsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackups(std::move(request));
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerClient::GetBackup(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::GetBackupRequest request;
  request.set_name(name);
  return connection_->GetBackup(request);
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerClient::GetBackup(
    google::cloud::filestore::v1::GetBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerClient::CreateBackup(
    std::string const& parent,
    google::cloud::filestore::v1::Backup const& backup,
    std::string const& backup_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::CreateBackupRequest request;
  request.set_parent(parent);
  *request.mutable_backup() = backup;
  request.set_backup_id(backup_id);
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerClient::CreateBackup(
    google::cloud::filestore::v1::CreateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateBackup(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteBackup(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::DeleteBackupRequest request;
  request.set_name(name);
  return connection_->DeleteBackup(request);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerClient::DeleteBackup(
    google::cloud::filestore::v1::DeleteBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerClient::UpdateBackup(
    google::cloud::filestore::v1::Backup const& backup,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::filestore::v1::UpdateBackupRequest request;
  *request.mutable_backup() = backup;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateBackup(request);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerClient::UpdateBackup(
    google::cloud::filestore::v1::UpdateBackupRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBackup(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1
}  // namespace cloud
}  // namespace google
