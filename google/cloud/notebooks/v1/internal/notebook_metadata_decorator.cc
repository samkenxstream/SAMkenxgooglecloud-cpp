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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/internal/notebook_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/notebooks/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NotebookServiceMetadata::NotebookServiceMetadata(
    std::shared_ptr<NotebookServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
NotebookServiceMetadata::ListInstances(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListInstancesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListInstances(context, request);
}

StatusOr<google::cloud::notebooks::v1::Instance>
NotebookServiceMetadata::GetInstance(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateInstanceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncRegisterInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RegisterInstanceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncRegisterInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceAccelerator(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSetInstanceAccelerator(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceMachineType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSetInstanceMachineType(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpdateInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateInstanceConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpdateShieldedInstanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateShieldedInstanceConfig(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncSetInstanceLabels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSetInstanceLabels(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
NotebookServiceMetadata::UpdateInstanceMetadataItems(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateInstanceMetadataItems(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StartInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStartInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::StopInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStopInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ResetInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncResetInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncReportInstanceInfo(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncReportInstanceInfo(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
NotebookServiceMetadata::IsInstanceUpgradeable(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request) {
  SetMetadata(context, "notebook_instance=" + request.notebook_instance());
  return child_->IsInstanceUpgradeable(context, request);
}

StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
NotebookServiceMetadata::GetInstanceHealth(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetInstanceHealthRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInstanceHealth(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpgradeInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpgradeInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncRollbackInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::RollbackInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncRollbackInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDiagnoseInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDiagnoseInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncUpgradeInstanceInternal(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpgradeInstanceInternal(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
NotebookServiceMetadata::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEnvironments(context, request);
}

StatusOr<google::cloud::notebooks::v1::Environment>
NotebookServiceMetadata::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetEnvironmentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEnvironment(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateEnvironmentRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
NotebookServiceMetadata::ListSchedules(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListSchedulesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSchedules(context, request);
}

StatusOr<google::cloud::notebooks::v1::Schedule>
NotebookServiceMetadata::GetSchedule(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetScheduleRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetSchedule(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteScheduleRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteSchedule(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateScheduleRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateSchedule(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncTriggerSchedule(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::TriggerScheduleRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncTriggerSchedule(cq, std::move(context), request);
}

StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
NotebookServiceMetadata::ListExecutions(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::ListExecutionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListExecutions(context, request);
}

StatusOr<google::cloud::notebooks::v1::Execution>
NotebookServiceMetadata::GetExecution(
    grpc::ClientContext& context,
    google::cloud::notebooks::v1::GetExecutionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetExecution(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::DeleteExecutionRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteExecution(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncCreateExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::notebooks::v1::CreateExecutionRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateExecution(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NotebookServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> NotebookServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void NotebookServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void NotebookServiceMetadata::SetMetadata(grpc::ClientContext& context) {
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
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
