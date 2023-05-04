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
// source: google/cloud/kms/v1/ekm_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_EKM_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_EKM_CLIENT_H

#include "google/cloud/kms/v1/ekm_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Google Cloud Key Management EKM Service
///
/// Manages external cryptographic keys and operations using those keys.
/// Implements a REST model with the following objects:
/// * [EkmConnection][google.cloud.kms.v1.EkmConnection]
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.kms.v1.EkmConnection]:
/// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
///
class EkmServiceClient {
 public:
  explicit EkmServiceClient(std::shared_ptr<EkmServiceConnection> connection,
                            Options opts = {});
  ~EkmServiceClient();

  ///@{
  /// @name Copy and move support
  EkmServiceClient(EkmServiceClient const&) = default;
  EkmServiceClient& operator=(EkmServiceClient const&) = default;
  EkmServiceClient(EkmServiceClient&&) = default;
  EkmServiceClient& operator=(EkmServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EkmServiceClient const& a, EkmServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EkmServiceClient const& a, EkmServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists [EkmConnections][google.cloud.kms.v1.EkmConnection].
  ///
  /// @param parent  Required. The resource name of the location associated with
  /// the
  ///  [EkmConnections][google.cloud.kms.v1.EkmConnection] to list, in the
  ///  format `projects/*/locations/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.ListEkmConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L109}
  ///
  StreamRange<google::cloud::kms::v1::EkmConnection> ListEkmConnections(
      std::string const& parent, Options opts = {});

  ///
  /// Lists [EkmConnections][google.cloud.kms.v1.EkmConnection].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::ListEkmConnectionsRequest,google/cloud/kms/v1/ekm_service.proto#L109}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.ListEkmConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L109}
  ///
  StreamRange<google::cloud::kms::v1::EkmConnection> ListEkmConnections(
      google::cloud::kms::v1::ListEkmConnectionsRequest request,
      Options opts = {});

  ///
  /// Returns metadata for a given
  /// [EkmConnection][google.cloud.kms.v1.EkmConnection].
  ///
  /// @param name  Required. The [name][google.cloud.kms.v1.EkmConnection.name]
  /// of the
  ///  [EkmConnection][google.cloud.kms.v1.EkmConnection] to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.GetEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L164}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> GetEkmConnection(
      std::string const& name, Options opts = {});

  ///
  /// Returns metadata for a given
  /// [EkmConnection][google.cloud.kms.v1.EkmConnection].
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::GetEkmConnectionRequest,google/cloud/kms/v1/ekm_service.proto#L164}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.GetEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L164}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> GetEkmConnection(
      google::cloud::kms::v1::GetEkmConnectionRequest const& request,
      Options opts = {});

  ///
  /// Creates a new [EkmConnection][google.cloud.kms.v1.EkmConnection] in a
  /// given Project and Location.
  ///
  /// @param parent  Required. The resource name of the location associated with
  /// the
  ///  [EkmConnection][google.cloud.kms.v1.EkmConnection], in the format
  ///  `projects/*/locations/*`.
  /// @param ekm_connection_id  Required. It must be unique within a location
  /// and match the regular
  ///  expression `[a-zA-Z0-9_-]{1,63}`.
  /// @param ekm_connection  Required. An
  /// [EkmConnection][google.cloud.kms.v1.EkmConnection] with
  ///  initial field values.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.CreateEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L177}
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> CreateEkmConnection(
      std::string const& parent, std::string const& ekm_connection_id,
      google::cloud::kms::v1::EkmConnection const& ekm_connection,
      Options opts = {});

  ///
  /// Creates a new [EkmConnection][google.cloud.kms.v1.EkmConnection] in a
  /// given Project and Location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::CreateEkmConnectionRequest,google/cloud/kms/v1/ekm_service.proto#L177}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.CreateEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L177}
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> CreateEkmConnection(
      google::cloud::kms::v1::CreateEkmConnectionRequest const& request,
      Options opts = {});

  ///
  /// Updates an [EkmConnection][google.cloud.kms.v1.EkmConnection]'s metadata.
  ///
  /// @param ekm_connection  Required.
  /// [EkmConnection][google.cloud.kms.v1.EkmConnection] with updated
  ///  values.
  /// @param update_mask  Required. List of fields to be updated in this
  /// request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.UpdateEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L199}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> UpdateEkmConnection(
      google::cloud::kms::v1::EkmConnection const& ekm_connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an [EkmConnection][google.cloud.kms.v1.EkmConnection]'s metadata.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::UpdateEkmConnectionRequest,google/cloud/kms/v1/ekm_service.proto#L199}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConnection,google/cloud/kms/v1/ekm_service.proto#L282}
  ///
  /// [google.cloud.kms.v1.EkmConnection]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L282}
  /// [google.cloud.kms.v1.UpdateEkmConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L199}
  ///
  StatusOr<google::cloud::kms::v1::EkmConnection> UpdateEkmConnection(
      google::cloud::kms::v1::UpdateEkmConnectionRequest const& request,
      Options opts = {});

  ///
  /// Returns the [EkmConfig][google.cloud.kms.v1.EkmConfig] singleton resource
  /// for a given project and location.
  ///
  /// @param name  Required. The [name][google.cloud.kms.v1.EkmConfig.name] of
  /// the
  ///  [EkmConfig][google.cloud.kms.v1.EkmConfig] to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConfig,google/cloud/kms/v1/ekm_service.proto#L401}
  ///
  /// [google.cloud.kms.v1.EkmConfig]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L401}
  /// [google.cloud.kms.v1.GetEkmConfigRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L211}
  ///
  StatusOr<google::cloud::kms::v1::EkmConfig> GetEkmConfig(
      std::string const& name, Options opts = {});

  ///
  /// Returns the [EkmConfig][google.cloud.kms.v1.EkmConfig] singleton resource
  /// for a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::GetEkmConfigRequest,google/cloud/kms/v1/ekm_service.proto#L211}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConfig,google/cloud/kms/v1/ekm_service.proto#L401}
  ///
  /// [google.cloud.kms.v1.EkmConfig]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L401}
  /// [google.cloud.kms.v1.GetEkmConfigRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L211}
  ///
  StatusOr<google::cloud::kms::v1::EkmConfig> GetEkmConfig(
      google::cloud::kms::v1::GetEkmConfigRequest const& request,
      Options opts = {});

  ///
  /// Updates the [EkmConfig][google.cloud.kms.v1.EkmConfig] singleton resource
  /// for a given project and location.
  ///
  /// @param ekm_config  Required. [EkmConfig][google.cloud.kms.v1.EkmConfig]
  /// with updated values.
  /// @param update_mask  Required. List of fields to be updated in this
  /// request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConfig,google/cloud/kms/v1/ekm_service.proto#L401}
  ///
  /// [google.cloud.kms.v1.EkmConfig]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L401}
  /// [google.cloud.kms.v1.UpdateEkmConfigRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L224}
  ///
  StatusOr<google::cloud::kms::v1::EkmConfig> UpdateEkmConfig(
      google::cloud::kms::v1::EkmConfig const& ekm_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the [EkmConfig][google.cloud.kms.v1.EkmConfig] singleton resource
  /// for a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::kms::v1::UpdateEkmConfigRequest,google/cloud/kms/v1/ekm_service.proto#L224}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::kms::v1::EkmConfig,google/cloud/kms/v1/ekm_service.proto#L401}
  ///
  /// [google.cloud.kms.v1.EkmConfig]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L401}
  /// [google.cloud.kms.v1.UpdateEkmConfigRequest]:
  /// @googleapis_reference_link{google/cloud/kms/v1/ekm_service.proto#L224}
  ///
  StatusOr<google::cloud::kms::v1::EkmConfig> UpdateEkmConfig(
      google::cloud::kms::v1::UpdateEkmConfigRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<EkmServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_V1_EKM_CLIENT_H
