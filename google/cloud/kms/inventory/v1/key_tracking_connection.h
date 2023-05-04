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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_H

#include "google/cloud/kms/inventory/v1/internal/key_tracking_retry_traits.h"
#include "google/cloud/kms/inventory/v1/key_tracking_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/kms/inventory/v1/key_tracking_service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using KeyTrackingServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        kms_inventory_v1_internal::KeyTrackingServiceRetryTraits>;

using KeyTrackingServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        kms_inventory_v1_internal::KeyTrackingServiceRetryTraits>;

using KeyTrackingServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        kms_inventory_v1_internal::KeyTrackingServiceRetryTraits>;

/**
 * The `KeyTrackingServiceConnection` object for `KeyTrackingServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `KeyTrackingServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `KeyTrackingServiceClient`.
 *
 * To create a concrete instance, see `MakeKeyTrackingServiceConnection()`.
 *
 * For mocking, see `kms_inventory_v1_mocks::MockKeyTrackingServiceConnection`.
 */
class KeyTrackingServiceConnection {
 public:
  virtual ~KeyTrackingServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
  GetProtectedResourcesSummary(
      google::cloud::kms::inventory::v1::
          GetProtectedResourcesSummaryRequest const& request);

  virtual StreamRange<google::cloud::kms::inventory::v1::ProtectedResource>
  SearchProtectedResources(
      google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest
          request);
};

/**
 * A factory function to construct an object of type
 * `KeyTrackingServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * KeyTrackingServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `KeyTrackingServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::kms_inventory_v1::KeyTrackingServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `KeyTrackingServiceConnection`
 * created by this function.
 */
std::shared_ptr<KeyTrackingServiceConnection> MakeKeyTrackingServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_TRACKING_CONNECTION_H
