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

#include "google/cloud/securitycenter/v1/internal/security_center_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterMetadata::SecurityCenterMetadata(
    std::shared_ptr<SecurityCenterStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncBulkMuteFindings(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::CreateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::CreateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::CreateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateNotificationConfig(context, request);
}

Status SecurityCenterMetadata::DeleteMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteMuteConfig(context, request);
}

Status SecurityCenterMetadata::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteNotificationConfig(context, request);
}

Status SecurityCenterMetadata::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::GetBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetBigQueryExport(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::GetMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::GetNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterMetadata::GetOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::GetEffectiveSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(context,
                                                                 request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::GetSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterMetadata::GroupAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->GroupAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterMetadata::GroupFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->GroupFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterMetadata::ListAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListDescendantSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDescendantSecurityHealthAnalyticsCustomModules(context,
                                                                    request);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterMetadata::ListFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterMetadata::ListMuteConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListMuteConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterMetadata::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListNotificationConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListEffectiveSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(context,
                                                                   request);
}

StatusOr<google::cloud::securitycenter::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterMetadata::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSecurityHealthAnalyticsCustomModules(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterMetadata::ListSources(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSources(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncRunAssetDiscovery(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::SetFindingState(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->SetFindingState(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::SetMute(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->SetMute(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterMetadata::UpdateExternalSystem(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  SetMetadata(context,
              "external_system.name=" + request.external_system().name());
  return child_->UpdateExternalSystem(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterMetadata::UpdateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  SetMetadata(context, "finding.name=" + request.finding().name());
  return child_->UpdateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterMetadata::UpdateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  SetMetadata(context, "mute_config.name=" + request.mute_config().name());
  return child_->UpdateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterMetadata::UpdateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  SetMetadata(context, "notification_config.name=" +
                           request.notification_config().name());
  return child_->UpdateNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterMetadata::UpdateOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  SetMetadata(context, "organization_settings.name=" +
                           request.organization_settings().name());
  return child_->UpdateOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterMetadata::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  SetMetadata(context,
              "security_health_analytics_custom_module.name=" +
                  request.security_health_analytics_custom_module().name());
  return child_->UpdateSecurityHealthAnalyticsCustomModule(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterMetadata::UpdateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  SetMetadata(context, "source.name=" + request.source().name());
  return child_->UpdateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterMetadata::UpdateSecurityMarks(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  SetMetadata(context,
              "security_marks.name=" + request.security_marks().name());
  return child_->UpdateSecurityMarks(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::CreateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateBigQueryExport(context, request);
}

Status SecurityCenterMetadata::DeleteBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterMetadata::UpdateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  SetMetadata(context,
              "big_query_export.name=" + request.big_query_export().name());
  return child_->UpdateBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterMetadata::ListBigQueryExports(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListBigQueryExports(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> SecurityCenterMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void SecurityCenterMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void SecurityCenterMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
