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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CLIENT_H

#include "google/cloud/composer/environments_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace composer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Managed Apache Airflow Environments.
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
class EnvironmentsClient {
 public:
  explicit EnvironmentsClient(
      std::shared_ptr<EnvironmentsConnection> connection, Options opts = {});
  ~EnvironmentsClient();

  ///@{
  /// @name Copy and move support
  EnvironmentsClient(EnvironmentsClient const&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient const&) = default;
  EnvironmentsClient(EnvironmentsClient&&) = default;
  EnvironmentsClient& operator=(EnvironmentsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(EnvironmentsClient const& a,
                         EnvironmentsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Create a new environment.
  ///
  /// @param parent  The parent must be of the form
  ///  "projects/{projectId}/locations/{locationId}".
  /// @param environment  The environment to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.CreateEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L129}
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(
      std::string const& parent,
      google::cloud::orchestration::airflow::service::v1::Environment const&
          environment,
      Options opts = {});

  ///
  /// Create a new environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::CreateEnvironmentRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L129}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.CreateEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L129}
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        CreateEnvironmentRequest const& request,
                    Options opts = {});

  ///
  /// Get an existing environment.
  ///
  /// @param name  The resource name of the environment to get, in the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.GetEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L139}
  ///
  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(std::string const& name, Options opts = {});

  ///
  /// Get an existing environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::GetEnvironmentRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L139}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.GetEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L139}
  ///
  StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request,
                 Options opts = {});

  ///
  /// List environments.
  ///
  /// @param parent  List environments in the given project and location, in the
  /// form:
  ///  "projects/{projectId}/locations/{locationId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.ListEnvironmentsRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L146}
  ///
  StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(std::string const& parent, Options opts = {});

  ///
  /// List environments.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::ListEnvironmentsRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L146}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.ListEnvironmentsRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L146}
  ///
  StreamRange<google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest request,
                   Options opts = {});

  ///
  /// Update an environment.
  ///
  /// @param name  The relative resource name of the environment to update, in
  /// the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param environment  A patch environment. Fields specified by the
  /// `updateMask` will be copied
  ///  from the patch environment into the environment under update.
  /// @param update_mask  Required. A comma-separated list of paths, relative to
  /// `Environment`, of
  ///  fields to update.
  ///  For example, to set the version of scikit-learn to install in the
  ///  environment to 0.19.0 and to remove an existing installation of
  ///  numpy, the `updateMask` parameter would include the following two
  ///  `paths` values: "config.softwareConfig.pypiPackages.scikit-learn" and
  ///  "config.softwareConfig.pypiPackages.numpy". The included patch
  ///  environment would specify the scikit-learn version as follows:
  ///      {
  ///        "config":{
  ///          "softwareConfig":{
  ///            "pypiPackages":{
  ///              "scikit-learn":"==0.19.0"
  ///            }
  ///          }
  ///        }
  ///      }
  ///  Note that in the above example, any existing PyPI packages
  ///  other than scikit-learn and numpy will be unaffected.
  ///  Only one update type may be included in a single request's `updateMask`.
  ///  For example, one cannot update both the PyPI packages and
  ///  labels in the same request. However, it is possible to update multiple
  ///  members of a map field simultaneously in the same request. For example,
  ///  to set the labels "label1" and "label2" while clearing "label3" (assuming
  ///  it already exists), one can
  ///  provide the paths "labels.label1", "labels.label2", and "labels.label3"
  ///  and populate the patch environment as follows:
  ///      {
  ///        "labels":{
  ///          "label1":"new-label1-value"
  ///          "label2":"new-label2-value"
  ///        }
  ///      }
  ///  Note that in the above example, any existing labels that are not
  ///  included in the `updateMask` will be unaffected.
  ///  It is also possible to replace an entire map field by providing the
  ///  map field's path in the `updateMask`. The new value of the field will
  ///  be that which is provided in the patch environment. For example, to
  ///  delete all pre-existing user-specified PyPI packages and
  ///  install botocore at version 1.7.14, the `updateMask` would contain
  ///  the path "config.softwareConfig.pypiPackages", and
  ///  the patch environment would be the following:
  ///      {
  ///        "config":{
  ///          "softwareConfig":{
  ///            "pypiPackages":{
  ///              "botocore":"==1.7.14"
  ///            }
  ///          }
  ///        }
  ///      }
  ///  **Note:** Only the following fields can be updated:
  ///  * `config.softwareConfig.pypiPackages`
  ///      * Replace all custom custom PyPI packages. If a replacement
  ///        package map is not included in `environment`, all custom
  ///        PyPI packages are cleared. It is an error to provide both
  ///        this mask and a mask specifying an individual package.
  ///  * `config.softwareConfig.pypiPackages.`packagename
  ///      * Update the custom PyPI package *packagename*,
  ///        preserving other packages. To delete the package, include it in
  ///        `updateMask`, and omit the mapping for it in
  ///        `environment.config.softwareConfig.pypiPackages`. It is an error
  ///        to provide both a mask of this form and the
  ///        `config.softwareConfig.pypiPackages` mask.
  ///  * `labels`
  ///      * Replace all environment labels. If a replacement labels map is not
  ///        included in `environment`, all labels are cleared. It is an error
  ///        to provide both this mask and a mask specifying one or more
  ///        individual labels.
  ///  * `labels.`labelName
  ///      * Set the label named *labelName*, while preserving other
  ///        labels. To delete the label, include it in `updateMask` and omit
  ///        its mapping in `environment.labels`. It is an error to provide both
  ///        a mask of this form and the `labels` mask.
  ///  * `config.nodeCount`
  ///      * Horizontally scale the number of nodes in the environment. An
  ///      integer
  ///        greater than or equal to 3 must be provided in the
  ///        `config.nodeCount` field. Supported for Cloud Composer environments
  ///        in versions composer-1.*.*-airflow-*.*.*.
  ///  * `config.webServerNetworkAccessControl`
  ///      * Replace the environment's current `WebServerNetworkAccessControl`.
  ///  * `config.softwareConfig.airflowConfigOverrides`
  ///      * Replace all Apache Airflow config overrides. If a replacement
  ///      config
  ///        overrides map is not included in `environment`, all config
  ///        overrides are cleared. It is an error to provide both this mask and
  ///        a mask specifying one or more individual config overrides.
  ///  * `config.softwareConfig.airflowConfigOverrides.`section-name
  ///      * Override the Apache Airflow config property *name* in the
  ///        section named *section*, preserving other properties. To
  ///        delete the property override, include it in `updateMask` and omit
  ///        its mapping in
  ///        `environment.config.softwareConfig.airflowConfigOverrides`.
  ///        It is an error to provide both a mask of this form and the
  ///        `config.softwareConfig.airflowConfigOverrides` mask.
  ///  * `config.softwareConfig.envVariables`
  ///      * Replace all environment variables. If a replacement environment
  ///        variable map is not included in `environment`, all custom
  ///        environment variables are cleared.
  ///  * `config.softwareConfig.schedulerCount`
  ///      * Horizontally scale the number of schedulers in Airflow. A positive
  ///        integer not greater than the number of nodes must be provided in
  ///        the `config.softwareConfig.schedulerCount` field. Supported for
  ///        Cloud Composer environments in versions
  ///        composer-1.*.*-airflow-2.*.*.
  ///  * `config.databaseConfig.machineType`
  ///      * Cloud SQL machine type used by Airflow database.
  ///        It has to be one of: db-n1-standard-2, db-n1-standard-4,
  ///        db-n1-standard-8 or db-n1-standard-16. Supported for Cloud Composer
  ///        environments in versions composer-1.*.*-airflow-*.*.*.
  ///  * `config.webServerConfig.machineType`
  ///      * Machine type on which Airflow web server is running.
  ///        It has to be one of: composer-n1-webserver-2,
  ///        composer-n1-webserver-4 or composer-n1-webserver-8. Supported for
  ///        Cloud Composer environments in versions
  ///        composer-1.*.*-airflow-*.*.*.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L175}
  ///
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(
      std::string const& name,
      google::cloud::orchestration::airflow::service::v1::Environment const&
          environment,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Update an environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::UpdateEnvironmentRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L175}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::Environment,google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.Environment]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L1076}
  /// [google.cloud.orchestration.airflow.service.v1.UpdateEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L175}
  ///
  future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        UpdateEnvironmentRequest const& request,
                    Options opts = {});

  ///
  /// Delete an environment.
  ///
  /// @param name  The environment to delete, in the form:
  ///  "projects/{projectId}/locations/{locationId}/environments/{environmentId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::OperationMetadata,google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.DeleteEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L168}
  /// [google.cloud.orchestration.airflow.service.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(std::string const& name, Options opts = {});

  ///
  /// Delete an environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::DeleteEnvironmentRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L168}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::OperationMetadata,google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.DeleteEnvironmentRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L168}
  /// [google.cloud.orchestration.airflow.service.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/operations.proto#L27}
  ///
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(google::cloud::orchestration::airflow::service::v1::
                        DeleteEnvironmentRequest const& request,
                    Options opts = {});

  ///
  /// Creates a snapshots of a Cloud Composer environment.
  ///
  /// As a result of this operation, snapshot of environment's state is stored
  /// in a location specified in the SaveSnapshotRequest.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::SaveSnapshotRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L311}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse,google/cloud/orchestration/airflow/service/v1/environments.proto#L322}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.SaveSnapshotRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L311}
  /// [google.cloud.orchestration.airflow.service.v1.SaveSnapshotResponse]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L322}
  ///
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
  SaveSnapshot(google::cloud::orchestration::airflow::service::v1::
                   SaveSnapshotRequest const& request,
               Options opts = {});

  ///
  /// Loads a snapshot of a Cloud Composer environment.
  ///
  /// As a result of this operation, a snapshot of environment's specified in
  /// LoadSnapshotRequest is loaded into the environment.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::LoadSnapshotRequest,google/cloud/orchestration/airflow/service/v1/environments.proto#L331}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse,google/cloud/orchestration/airflow/service/v1/environments.proto#L358}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.LoadSnapshotRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L331}
  /// [google.cloud.orchestration.airflow.service.v1.LoadSnapshotResponse]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/environments.proto#L358}
  ///
  future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
  LoadSnapshot(google::cloud::orchestration::airflow::service::v1::
                   LoadSnapshotRequest const& request,
               Options opts = {});

 private:
  std::shared_ptr<EnvironmentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_ENVIRONMENTS_CLIENT_H
