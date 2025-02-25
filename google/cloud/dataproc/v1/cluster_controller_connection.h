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
// source: google/cloud/dataproc/v1/clusters.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_CLUSTER_CONTROLLER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_CLUSTER_CONTROLLER_CONNECTION_H

#include "google/cloud/dataproc/v1/cluster_controller_connection_idempotency_policy.h"
#include "google/cloud/dataproc/v1/internal/cluster_controller_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/clusters.pb.h>
#include <google/cloud/dataproc/v1/operations.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ClusterControllerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        dataproc_v1_internal::ClusterControllerRetryTraits>;

using ClusterControllerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dataproc_v1_internal::ClusterControllerRetryTraits>;

using ClusterControllerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dataproc_v1_internal::ClusterControllerRetryTraits>;

/**
 * The `ClusterControllerConnection` object for `ClusterControllerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ClusterControllerClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `ClusterControllerClient`.
 *
 * To create a concrete instance, see `MakeClusterControllerConnection()`.
 *
 * For mocking, see `dataproc_v1_mocks::MockClusterControllerConnection`.
 */
class ClusterControllerConnection {
 public:
  virtual ~ClusterControllerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> CreateCluster(
      google::cloud::dataproc::v1::CreateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> UpdateCluster(
      google::cloud::dataproc::v1::UpdateClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> StopCluster(
      google::cloud::dataproc::v1::StopClusterRequest const& request);

  virtual future<StatusOr<google::cloud::dataproc::v1::Cluster>> StartCluster(
      google::cloud::dataproc::v1::StartClusterRequest const& request);

  virtual future<
      StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
  DeleteCluster(
      google::cloud::dataproc::v1::DeleteClusterRequest const& request);

  virtual StatusOr<google::cloud::dataproc::v1::Cluster> GetCluster(
      google::cloud::dataproc::v1::GetClusterRequest const& request);

  virtual StreamRange<google::cloud::dataproc::v1::Cluster> ListClusters(
      google::cloud::dataproc::v1::ListClustersRequest request);

  virtual future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
  DiagnoseCluster(
      google::cloud::dataproc::v1::DiagnoseClusterRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `ClusterControllerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * ClusterControllerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ClusterControllerConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dataproc_v1::ClusterControllerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `ClusterControllerConnection` created
 * by this function.
 */
std::shared_ptr<ClusterControllerConnection> MakeClusterControllerConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<ClusterControllerConnection> MakeClusterControllerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_CLUSTER_CONTROLLER_CONNECTION_H
