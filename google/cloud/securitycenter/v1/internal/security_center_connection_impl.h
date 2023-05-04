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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_CONNECTION_IMPL_H

#include "google/cloud/securitycenter/v1/internal/security_center_retry_traits.h"
#include "google/cloud/securitycenter/v1/internal/security_center_stub.h"
#include "google/cloud/securitycenter/v1/security_center_connection.h"
#include "google/cloud/securitycenter/v1/security_center_connection_idempotency_policy.h"
#include "google/cloud/securitycenter/v1/security_center_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterConnectionImpl
    : public securitycenter_v1::SecurityCenterConnection {
 public:
  ~SecurityCenterConnectionImpl() override = default;

  SecurityCenterConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<securitycenter_v1_internal::SecurityCenterStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
  BulkMuteFindings(
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request)
      override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  CreateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          CreateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> CreateSource(
      google::cloud::securitycenter::v1::CreateSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Finding> CreateFinding(
      google::cloud::securitycenter::v1::CreateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> CreateMuteConfig(
      google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  CreateNotificationConfig(
      google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
          request) override;

  Status DeleteMuteConfig(
      google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request)
      override;

  Status DeleteNotificationConfig(
      google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
          request) override;

  Status DeleteSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          DeleteSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport> GetBigQueryExport(
      google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> GetMuteConfig(
      google::cloud::securitycenter::v1::GetMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  GetNotificationConfig(
      google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  GetOrganizationSettings(
      google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::
               EffectiveSecurityHealthAnalyticsCustomModule>
  GetEffectiveSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  GetSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          GetSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> GetSource(
      google::cloud::securitycenter::v1::GetSourceRequest const& request)
      override;

  StreamRange<google::cloud::securitycenter::v1::GroupResult> GroupAssets(
      google::cloud::securitycenter::v1::GroupAssetsRequest request) override;

  StreamRange<google::cloud::securitycenter::v1::GroupResult> GroupFindings(
      google::cloud::securitycenter::v1::GroupFindingsRequest request) override;

  StreamRange<
      google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>
  ListAssets(
      google::cloud::securitycenter::v1::ListAssetsRequest request) override;

  StreamRange<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  ListDescendantSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListDescendantSecurityHealthAnalyticsCustomModulesRequest request)
      override;

  StreamRange<google::cloud::securitycenter::v1::ListFindingsResponse::
                  ListFindingsResult>
  ListFindings(
      google::cloud::securitycenter::v1::ListFindingsRequest request) override;

  StreamRange<google::cloud::securitycenter::v1::MuteConfig> ListMuteConfigs(
      google::cloud::securitycenter::v1::ListMuteConfigsRequest request)
      override;

  StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
  ListNotificationConfigs(
      google::cloud::securitycenter::v1::ListNotificationConfigsRequest request)
      override;

  StreamRange<google::cloud::securitycenter::v1::
                  EffectiveSecurityHealthAnalyticsCustomModule>
  ListEffectiveSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request)
      override;

  StreamRange<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  ListSecurityHealthAnalyticsCustomModules(
      google::cloud::securitycenter::v1::
          ListSecurityHealthAnalyticsCustomModulesRequest request) override;

  StreamRange<google::cloud::securitycenter::v1::Source> ListSources(
      google::cloud::securitycenter::v1::ListSourcesRequest request) override;

  future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
  RunAssetDiscovery(
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::Finding> SetFindingState(
      google::cloud::securitycenter::v1::SetFindingStateRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Finding> SetMute(
      google::cloud::securitycenter::v1::SetMuteRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
  UpdateExternalSystem(
      google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::Finding> UpdateFinding(
      google::cloud::securitycenter::v1::UpdateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::MuteConfig> UpdateMuteConfig(
      google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
  UpdateNotificationConfig(
      google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
  UpdateOrganizationSettings(
      google::cloud::securitycenter::v1::
          UpdateOrganizationSettingsRequest const& request) override;

  StatusOr<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
  UpdateSecurityHealthAnalyticsCustomModule(
      google::cloud::securitycenter::v1::
          UpdateSecurityHealthAnalyticsCustomModuleRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::Source> UpdateSource(
      google::cloud::securitycenter::v1::UpdateSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
  UpdateSecurityMarks(
      google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
  CreateBigQueryExport(
      google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
          request) override;

  Status DeleteBigQueryExport(
      google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
  UpdateBigQueryExport(
      google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
          request) override;

  StreamRange<google::cloud::securitycenter::v1::BigQueryExport>
  ListBigQueryExports(
      google::cloud::securitycenter::v1::ListBigQueryExportsRequest request)
      override;

 private:
  std::unique_ptr<securitycenter_v1::SecurityCenterRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<securitycenter_v1::SecurityCenterRetryPolicyOption>()) {
      return options.get<securitycenter_v1::SecurityCenterRetryPolicyOption>()
          ->clone();
    }
    return options_.get<securitycenter_v1::SecurityCenterRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<securitycenter_v1::SecurityCenterBackoffPolicyOption>()) {
      return options
          .get<securitycenter_v1::SecurityCenterBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<securitycenter_v1::SecurityCenterBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<securitycenter_v1::SecurityCenterConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<securitycenter_v1::
                        SecurityCenterConnectionIdempotencyPolicyOption>()) {
      return options
          .get<securitycenter_v1::
                   SecurityCenterConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<securitycenter_v1::
                 SecurityCenterConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<securitycenter_v1::SecurityCenterPollingPolicyOption>()) {
      return options
          .get<securitycenter_v1::SecurityCenterPollingPolicyOption>()
          ->clone();
    }
    return options_.get<securitycenter_v1::SecurityCenterPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<securitycenter_v1_internal::SecurityCenterStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V1_INTERNAL_SECURITY_CENTER_CONNECTION_IMPL_H
