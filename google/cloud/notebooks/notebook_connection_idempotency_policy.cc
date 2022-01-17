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

#include "google/cloud/notebooks/notebook_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

NotebookServiceConnectionIdempotencyPolicy::
    ~NotebookServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultNotebookServiceConnectionIdempotencyPolicy
    : public NotebookServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultNotebookServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultNotebookServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListInstances(
      google::cloud::notebooks::v1::ListInstancesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetInstance(
      google::cloud::notebooks::v1::GetInstanceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateInstance(
      google::cloud::notebooks::v1::CreateInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RegisterInstance(
      google::cloud::notebooks::v1::RegisterInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetInstanceAccelerator(
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetInstanceMachineType(
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateInstanceConfig(
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateShieldedInstanceConfig(
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetInstanceLabels(
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteInstance(
      google::cloud::notebooks::v1::DeleteInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency StartInstance(
      google::cloud::notebooks::v1::StartInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency StopInstance(
      google::cloud::notebooks::v1::StopInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ResetInstance(
      google::cloud::notebooks::v1::ResetInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ReportInstanceInfo(
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency IsInstanceUpgradeable(
      google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetInstanceHealth(
      google::cloud::notebooks::v1::GetInstanceHealthRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpgradeInstance(
      google::cloud::notebooks::v1::UpgradeInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RollbackInstance(
      google::cloud::notebooks::v1::RollbackInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpgradeInstanceInternal(
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListEnvironments(
      google::cloud::notebooks::v1::ListEnvironmentsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetEnvironment(
      google::cloud::notebooks::v1::GetEnvironmentRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateEnvironment(
      google::cloud::notebooks::v1::CreateEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteEnvironment(
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListSchedules(
      google::cloud::notebooks::v1::ListSchedulesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetSchedule(
      google::cloud::notebooks::v1::GetScheduleRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteSchedule(
      google::cloud::notebooks::v1::DeleteScheduleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateSchedule(
      google::cloud::notebooks::v1::CreateScheduleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TriggerSchedule(
      google::cloud::notebooks::v1::TriggerScheduleRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListExecutions(
      google::cloud::notebooks::v1::ListExecutionsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetExecution(
      google::cloud::notebooks::v1::GetExecutionRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteExecution(
      google::cloud::notebooks::v1::DeleteExecutionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateExecution(
      google::cloud::notebooks::v1::CreateExecutionRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
MakeDefaultNotebookServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultNotebookServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google
