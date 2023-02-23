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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/document_processor_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace documentai_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DocumentProcessorServiceConnectionIdempotencyPolicy::
    ~DocumentProcessorServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<DocumentProcessorServiceConnectionIdempotencyPolicy>
DocumentProcessorServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<DocumentProcessorServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::ProcessDocument(
    google::cloud::documentai::v1::ProcessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::BatchProcessDocuments(
    google::cloud::documentai::v1::BatchProcessRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::FetchProcessorTypes(
    google::cloud::documentai::v1::FetchProcessorTypesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::ListProcessorTypes(
    google::cloud::documentai::v1::ListProcessorTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::GetProcessorType(
    google::cloud::documentai::v1::GetProcessorTypeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DocumentProcessorServiceConnectionIdempotencyPolicy::ListProcessors(
    google::cloud::documentai::v1::ListProcessorsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DocumentProcessorServiceConnectionIdempotencyPolicy::GetProcessor(
    google::cloud::documentai::v1::GetProcessorRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::TrainProcessorVersion(
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::GetProcessorVersion(
    google::cloud::documentai::v1::GetProcessorVersionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::ListProcessorVersions(
    google::cloud::documentai::v1::ListProcessorVersionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::DeleteProcessorVersion(
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::DeployProcessorVersion(
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::UndeployProcessorVersion(
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::CreateProcessor(
    google::cloud::documentai::v1::CreateProcessorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::DeleteProcessor(
    google::cloud::documentai::v1::DeleteProcessorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::EnableProcessor(
    google::cloud::documentai::v1::EnableProcessorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::DisableProcessor(
    google::cloud::documentai::v1::DisableProcessorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::SetDefaultProcessorVersion(
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentProcessorServiceConnectionIdempotencyPolicy::ReviewDocument(
    google::cloud::documentai::v1::ReviewDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::EvaluateProcessorVersion(
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentProcessorServiceConnectionIdempotencyPolicy::GetEvaluation(
    google::cloud::documentai::v1::GetEvaluationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
DocumentProcessorServiceConnectionIdempotencyPolicy::ListEvaluations(
    google::cloud::documentai::v1::ListEvaluationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<DocumentProcessorServiceConnectionIdempotencyPolicy>
MakeDefaultDocumentProcessorServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DocumentProcessorServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1
}  // namespace cloud
}  // namespace google
