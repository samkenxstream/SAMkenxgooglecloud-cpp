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
// source: google/cloud/dataproc/v1/jobs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_METADATA_DECORATOR_H

#include "google/cloud/dataproc/v1/internal/job_controller_stub.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class JobControllerMetadata : public JobControllerStub {
 public:
  ~JobControllerMetadata() override = default;
  explicit JobControllerMetadata(std::shared_ptr<JobControllerStub> child);

  StatusOr<google::cloud::dataproc::v1::Job> SubmitJob(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::SubmitJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubmitJobAsOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::SubmitJobRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::Job> GetJob(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::GetJobRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::ListJobsRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::Job> UpdateJob(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::UpdateJobRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::Job> CancelJob(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::CancelJobRequest const& request) override;

  Status DeleteJob(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::DeleteJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<JobControllerStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_JOB_CONTROLLER_METADATA_DECORATOR_H
