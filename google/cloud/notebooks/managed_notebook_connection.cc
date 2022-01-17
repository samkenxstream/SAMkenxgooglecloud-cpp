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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/managed_notebook_connection.h"
#include "google/cloud/notebooks/internal/managed_notebook_option_defaults.h"
#include "google/cloud/notebooks/internal/managed_notebook_stub_factory.h"
#include "google/cloud/notebooks/managed_notebook_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedNotebookServiceConnection::~ManagedNotebookServiceConnection() = default;

StreamRange<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnection::ListRuntimes(
    google::cloud::notebooks::v1::ListRuntimesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::notebooks::v1::Runtime>>(
      std::move(request),
      [](google::cloud::notebooks::v1::ListRuntimesRequest const&) {
        return StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse>{};
      },
      [](google::cloud::notebooks::v1::ListRuntimesResponse const&) {
        return std::vector<google::cloud::notebooks::v1::Runtime>();
      });
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceConnection::GetRuntime(
    google::cloud::notebooks::v1::GetRuntimeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::CreateRuntime(
    google::cloud::notebooks::v1::CreateRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
ManagedNotebookServiceConnection::DeleteRuntime(
    google::cloud::notebooks::v1::DeleteRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::StartRuntime(
    google::cloud::notebooks::v1::StartRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::StopRuntime(
    google::cloud::notebooks::v1::StopRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::SwitchRuntime(
    google::cloud::notebooks::v1::SwitchRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::ResetRuntime(
    google::cloud::notebooks::v1::ResetRuntimeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::notebooks::v1::Runtime>>
ManagedNotebookServiceConnection::ReportRuntimeEvent(
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::notebooks::v1::Runtime>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class ManagedNotebookServiceConnectionImpl
    : public ManagedNotebookServiceConnection {
 public:
  ManagedNotebookServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<notebooks_internal::ManagedNotebookServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<ManagedNotebookServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<ManagedNotebookServiceBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<ManagedNotebookServicePollingPolicyOption>()->clone()),
        idempotency_policy_(
            options
                .get<ManagedNotebookServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~ManagedNotebookServiceConnectionImpl() override = default;

  StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<ManagedNotebookServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListRuntimes(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::notebooks::v1::Runtime>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::notebooks::v1::ListRuntimesRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::notebooks::v1::ListRuntimesRequest const&
                         request) {
                return stub->ListRuntimes(context, request);
              },
              r, function_name);
        },
        [](google::cloud::notebooks::v1::ListRuntimesResponse r) {
          std::vector<google::cloud::notebooks::v1::Runtime> result(
              r.runtimes().size());
          auto& messages = *r.mutable_runtimes();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetRuntime(request),
        [this](grpc::ClientContext& context,
               google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
          return stub_->GetRuntime(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
          return stub->AsyncCreateRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(google::cloud::notebooks::v1::DeleteRuntimeRequest const&
                    request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
          return stub->AsyncDeleteRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultMetadata<
            google::cloud::notebooks::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
          return stub->AsyncStartRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->StartRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
          return stub->AsyncStopRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->StopRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
          return stub->AsyncSwitchRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SwitchRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](
            google::cloud::CompletionQueue& cq,
            std::unique_ptr<grpc::ClientContext> context,
            google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
          return stub->AsyncResetRuntime(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ResetRuntime(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::notebooks::v1::Runtime>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::notebooks::v1::ReportRuntimeEventRequest const&
                   request) {
          return stub->AsyncReportRuntimeEvent(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::notebooks::v1::Runtime>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ReportRuntimeEvent(request),
        polling_policy_prototype_->clone(), __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<notebooks_internal::ManagedNotebookServiceStub> stub_;
  std::unique_ptr<ManagedNotebookServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<ManagedNotebookServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<ManagedNotebookServiceConnection>
MakeManagedNotebookServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 ManagedNotebookServicePolicyOptionList>(
      options, __func__);
  options = notebooks_internal::ManagedNotebookServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = notebooks_internal::CreateDefaultManagedNotebookServiceStub(
      background->cq(), options);
  return std::make_shared<ManagedNotebookServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace notebooks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<notebooks::ManagedNotebookServiceConnection>
MakeManagedNotebookServiceConnection(
    std::shared_ptr<ManagedNotebookServiceStub> stub, Options options) {
  options = ManagedNotebookServiceDefaultOptions(std::move(options));
  return std::make_shared<notebooks::ManagedNotebookServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_internal
}  // namespace cloud
}  // namespace google
