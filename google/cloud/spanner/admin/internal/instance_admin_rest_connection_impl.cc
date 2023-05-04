// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_rest_connection_impl.h"
#include "google/cloud/spanner/admin/internal/instance_admin_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminRestConnectionImpl::InstanceAdminRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<spanner_admin_internal::InstanceAdminRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      InstanceAdminConnection::options())) {}

StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminRestConnectionImpl::ListInstanceConfigs(
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<spanner_admin::InstanceAdminRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListInstanceConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::spanner::admin::instance::v1::InstanceConfig>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::spanner::admin::instance::v1::
                          ListInstanceConfigsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::spanner::admin::instance::v1::
                       ListInstanceConfigsRequest const& request) {
              return stub->ListInstanceConfigs(rest_context, request);
            },
            r, function_name);
      },
      [](google::spanner::admin::instance::v1::ListInstanceConfigsResponse r) {
        std::vector<google::spanner::admin::instance::v1::InstanceConfig>
            result(r.instance_configs().size());
        auto& messages = *r.mutable_instance_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminRestConnectionImpl::GetInstanceConfig(
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetInstanceConfig(request),
      [this](
          rest_internal::RestContext& rest_context,
          google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
              request) {
        return stub_->GetInstanceConfig(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminRestConnectionImpl::CreateInstanceConfig(
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::instance::v1::InstanceConfig>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::spanner::admin::instance::v1::
                 CreateInstanceConfigRequest const& request) {
        return stub->AsyncCreateInstanceConfig(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::instance::v1::InstanceConfig>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateInstanceConfig(request), polling_policy(),
      __func__);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminRestConnectionImpl::UpdateInstanceConfig(
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::instance::v1::InstanceConfig>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::spanner::admin::instance::v1::
                 UpdateInstanceConfigRequest const& request) {
        return stub->AsyncUpdateInstanceConfig(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::instance::v1::InstanceConfig>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateInstanceConfig(request), polling_policy(),
      __func__);
}

Status InstanceAdminRestConnectionImpl::DeleteInstanceConfig(
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteInstanceConfig(request),
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::
                 DeleteInstanceConfigRequest const& request) {
        return stub_->DeleteInstanceConfig(rest_context, request);
      },
      request, __func__);
}

StreamRange<google::longrunning::Operation>
InstanceAdminRestConnectionImpl::ListInstanceConfigOperations(
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<spanner_admin::InstanceAdminRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListInstanceConfigOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::spanner::admin::instance::v1::
                          ListInstanceConfigOperationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::spanner::admin::instance::v1::
                       ListInstanceConfigOperationsRequest const& request) {
              return stub->ListInstanceConfigOperations(rest_context, request);
            },
            r, function_name);
      },
      [](google::spanner::admin::instance::v1::
             ListInstanceConfigOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::spanner::admin::instance::v1::Instance>
InstanceAdminRestConnectionImpl::ListInstances(
    google::spanner::admin::instance::v1::ListInstancesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<spanner_admin::InstanceAdminRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::spanner::admin::instance::v1::Instance>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::spanner::admin::instance::v1::ListInstancesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   google::spanner::admin::instance::v1::
                       ListInstancesRequest const& request) {
              return stub->ListInstances(rest_context, request);
            },
            r, function_name);
      },
      [](google::spanner::admin::instance::v1::ListInstancesResponse r) {
        std::vector<google::spanner::admin::instance::v1::Instance> result(
            r.instances().size());
        auto& messages = *r.mutable_instances();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminRestConnectionImpl::GetInstance(
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetInstance(request),
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::GetInstanceRequest const&
                 request) { return stub_->GetInstance(rest_context, request); },
      request, __func__);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminRestConnectionImpl::CreateInstance(
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::instance::v1::Instance>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::spanner::admin::instance::v1::CreateInstanceRequest const&
                 request) {
        return stub->AsyncCreateInstance(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::instance::v1::Instance>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateInstance(request), polling_policy(),
      __func__);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminRestConnectionImpl::UpdateInstance(
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::instance::v1::Instance>(
      background_->cq(), request,
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::spanner::admin::instance::v1::UpdateInstanceRequest const&
                 request) {
        return stub->AsyncUpdateInstance(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::instance::v1::Instance>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateInstance(request), polling_policy(),
      __func__);
}

Status InstanceAdminRestConnectionImpl::DeleteInstance(
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteInstance(request),
      [this](rest_internal::RestContext& rest_context,
             google::spanner::admin::instance::v1::DeleteInstanceRequest const&
                 request) {
        return stub_->DeleteInstance(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::Policy> InstanceAdminRestConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, request);
      },
      request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminRestConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
