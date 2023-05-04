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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_CONNECTION_IMPL_H

#include "google/cloud/deploy/v1/cloud_deploy_connection.h"
#include "google/cloud/deploy/v1/cloud_deploy_connection_idempotency_policy.h"
#include "google/cloud/deploy/v1/cloud_deploy_options.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_retry_traits.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_stub.h"
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
namespace deploy_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudDeployConnectionImpl : public deploy_v1::CloudDeployConnection {
 public:
  ~CloudDeployConnectionImpl() override = default;

  CloudDeployConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<deploy_v1_internal::CloudDeployStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
  ListDeliveryPipelines(
      google::cloud::deploy::v1::ListDeliveryPipelinesRequest request) override;

  StatusOr<google::cloud::deploy::v1::DeliveryPipeline> GetDeliveryPipeline(
      google::cloud::deploy::v1::GetDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  CreateDeliveryPipeline(
      google::cloud::deploy::v1::CreateDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
  UpdateDeliveryPipeline(
      google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const& request)
      override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
  DeleteDeliveryPipeline(
      google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const& request)
      override;

  StreamRange<google::cloud::deploy::v1::Target> ListTargets(
      google::cloud::deploy::v1::ListTargetsRequest request) override;

  StatusOr<google::cloud::deploy::v1::Target> GetTarget(
      google::cloud::deploy::v1::GetTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> CreateTarget(
      google::cloud::deploy::v1::CreateTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Target>> UpdateTarget(
      google::cloud::deploy::v1::UpdateTargetRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::OperationMetadata>> DeleteTarget(
      google::cloud::deploy::v1::DeleteTargetRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::Release> ListReleases(
      google::cloud::deploy::v1::ListReleasesRequest request) override;

  StatusOr<google::cloud::deploy::v1::Release> GetRelease(
      google::cloud::deploy::v1::GetReleaseRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Release>> CreateRelease(
      google::cloud::deploy::v1::CreateReleaseRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse> AbandonRelease(
      google::cloud::deploy::v1::AbandonReleaseRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse> ApproveRollout(
      google::cloud::deploy::v1::ApproveRolloutRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse> AdvanceRollout(
      google::cloud::deploy::v1::AdvanceRolloutRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::CancelRolloutResponse> CancelRollout(
      google::cloud::deploy::v1::CancelRolloutRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::Rollout> ListRollouts(
      google::cloud::deploy::v1::ListRolloutsRequest request) override;

  StatusOr<google::cloud::deploy::v1::Rollout> GetRollout(
      google::cloud::deploy::v1::GetRolloutRequest const& request) override;

  future<StatusOr<google::cloud::deploy::v1::Rollout>> CreateRollout(
      google::cloud::deploy::v1::CreateRolloutRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::IgnoreJobResponse> IgnoreJob(
      google::cloud::deploy::v1::IgnoreJobRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::RetryJobResponse> RetryJob(
      google::cloud::deploy::v1::RetryJobRequest const& request) override;

  StreamRange<google::cloud::deploy::v1::JobRun> ListJobRuns(
      google::cloud::deploy::v1::ListJobRunsRequest request) override;

  StatusOr<google::cloud::deploy::v1::JobRun> GetJobRun(
      google::cloud::deploy::v1::GetJobRunRequest const& request) override;

  StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse> TerminateJobRun(
      google::cloud::deploy::v1::TerminateJobRunRequest const& request)
      override;

  StatusOr<google::cloud::deploy::v1::Config> GetConfig(
      google::cloud::deploy::v1::GetConfigRequest const& request) override;

 private:
  std::unique_ptr<deploy_v1::CloudDeployRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<deploy_v1::CloudDeployRetryPolicyOption>()) {
      return options.get<deploy_v1::CloudDeployRetryPolicyOption>()->clone();
    }
    return options_.get<deploy_v1::CloudDeployRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<deploy_v1::CloudDeployBackoffPolicyOption>()) {
      return options.get<deploy_v1::CloudDeployBackoffPolicyOption>()->clone();
    }
    return options_.get<deploy_v1::CloudDeployBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<deploy_v1::CloudDeployConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<deploy_v1::CloudDeployConnectionIdempotencyPolicyOption>()) {
      return options
          .get<deploy_v1::CloudDeployConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<deploy_v1::CloudDeployConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<deploy_v1::CloudDeployPollingPolicyOption>()) {
      return options.get<deploy_v1::CloudDeployPollingPolicyOption>()->clone();
    }
    return options_.get<deploy_v1::CloudDeployPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<deploy_v1_internal::CloudDeployStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEPLOY_V1_INTERNAL_CLOUD_DEPLOY_CONNECTION_IMPL_H
