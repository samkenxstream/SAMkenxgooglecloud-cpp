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
// source: google/cloud/dataproc/v1/batches.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_BATCH_CONTROLLER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_BATCH_CONTROLLER_TRACING_STUB_H

#include "google/cloud/dataproc/v1/internal/batch_controller_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BatchControllerTracingStub : public BatchControllerStub {
 public:
  ~BatchControllerTracingStub() override = default;

  explicit BatchControllerTracingStub(
      std::shared_ptr<BatchControllerStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBatch(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataproc::v1::CreateBatchRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::Batch> GetBatch(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::GetBatchRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::ListBatchesResponse> ListBatches(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::ListBatchesRequest const& request) override;

  Status DeleteBatch(
      grpc::ClientContext& context,
      google::cloud::dataproc::v1::DeleteBatchRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<BatchControllerStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<BatchControllerStub> MakeBatchControllerTracingStub(
    std::shared_ptr<BatchControllerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_BATCH_CONTROLLER_TRACING_STUB_H
