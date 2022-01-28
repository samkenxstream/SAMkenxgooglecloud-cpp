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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#include "google/cloud/containeranalysis/internal/container_analysis_connection_impl.h"
#include "google/cloud/containeranalysis/internal/container_analysis_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContainerAnalysisConnectionImpl::ContainerAnalysisConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<containeranalysis_internal::ContainerAnalysisStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<containeranalysis::ContainerAnalysisRetryPolicyOption>()
              ->clone()),
      backoff_policy_prototype_(
          options
              .get<containeranalysis::ContainerAnalysisBackoffPolicyOption>()
              ->clone()),
      idempotency_policy_(
          options
              .get<containeranalysis::
                       ContainerAnalysisConnectionIdempotencyPolicyOption>()
              ->clone()) {}

StatusOr<google::iam::v1::Policy> ContainerAnalysisConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> ContainerAnalysisConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ContainerAnalysisConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, request);
      },
      request, __func__);
}

StatusOr<
    google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
ContainerAnalysisConnectionImpl::GetVulnerabilityOccurrencesSummary(
    google::devtools::containeranalysis::v1::
        GetVulnerabilityOccurrencesSummaryRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetVulnerabilityOccurrencesSummary(request),
      [this](grpc::ClientContext& context,
             google::devtools::containeranalysis::v1::
                 GetVulnerabilityOccurrencesSummaryRequest const& request) {
        return stub_->GetVulnerabilityOccurrencesSummary(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google
