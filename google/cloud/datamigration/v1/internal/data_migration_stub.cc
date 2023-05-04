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
// source: google/cloud/clouddms/v1/clouddms.proto

#include "google/cloud/datamigration/v1/internal/data_migration_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/clouddms/v1/clouddms.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataMigrationServiceStub::~DataMigrationServiceStub() = default;

StatusOr<google::cloud::clouddms::v1::ListMigrationJobsResponse>
DefaultDataMigrationServiceStub::ListMigrationJobs(
    grpc::ClientContext& client_context,
    google::cloud::clouddms::v1::ListMigrationJobsRequest const& request) {
  google::cloud::clouddms::v1::ListMigrationJobsResponse response;
  auto status =
      grpc_stub_->ListMigrationJobs(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::clouddms::v1::MigrationJob>
DefaultDataMigrationServiceStub::GetMigrationJob(
    grpc::ClientContext& client_context,
    google::cloud::clouddms::v1::GetMigrationJobRequest const& request) {
  google::cloud::clouddms::v1::MigrationJob response;
  auto status =
      grpc_stub_->GetMigrationJob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncCreateMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::CreateMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::CreateMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::CreateMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncUpdateMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::UpdateMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncDeleteMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::DeleteMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncStartMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::StartMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::StartMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::StartMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStartMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncStopMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::StopMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::StopMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::StopMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncStopMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncResumeMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::ResumeMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncResumeMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncPromoteMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::PromoteMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::clouddms::v1::PromoteMigrationJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPromoteMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncVerifyMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::VerifyMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncVerifyMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncRestartMigrationJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::RestartMigrationJobRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::RestartMigrationJobRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::clouddms::v1::RestartMigrationJobRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestartMigrationJob(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::clouddms::v1::SshScript>
DefaultDataMigrationServiceStub::GenerateSshScript(
    grpc::ClientContext& client_context,
    google::cloud::clouddms::v1::GenerateSshScriptRequest const& request) {
  google::cloud::clouddms::v1::SshScript response;
  auto status =
      grpc_stub_->GenerateSshScript(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::clouddms::v1::ListConnectionProfilesResponse>
DefaultDataMigrationServiceStub::ListConnectionProfiles(
    grpc::ClientContext& client_context,
    google::cloud::clouddms::v1::ListConnectionProfilesRequest const& request) {
  google::cloud::clouddms::v1::ListConnectionProfilesResponse response;
  auto status =
      grpc_stub_->ListConnectionProfiles(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
DefaultDataMigrationServiceStub::GetConnectionProfile(
    grpc::ClientContext& client_context,
    google::cloud::clouddms::v1::GetConnectionProfileRequest const& request) {
  google::cloud::clouddms::v1::ConnectionProfile response;
  auto status =
      grpc_stub_->GetConnectionProfile(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncCreateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::CreateConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncUpdateConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncDeleteConnectionProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteConnectionProfile(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataMigrationServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDataMigrationServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1_internal
}  // namespace cloud
}  // namespace google
