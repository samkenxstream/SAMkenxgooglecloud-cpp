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
// source: google/cloud/dialogflow/v2/document.proto

#include "google/cloud/dialogflow_es/documents_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DocumentsConnectionIdempotencyPolicy::~DocumentsConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<DocumentsConnectionIdempotencyPolicy>
DocumentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DocumentsConnectionIdempotencyPolicy>(*this);
}

Idempotency DocumentsConnectionIdempotencyPolicy::ListDocuments(
    google::cloud::dialogflow::v2::ListDocumentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::GetDocument(
    google::cloud::dialogflow::v2::GetDocumentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::CreateDocument(
    google::cloud::dialogflow::v2::CreateDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::ImportDocuments(
    google::cloud::dialogflow::v2::ImportDocumentsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::DeleteDocument(
    google::cloud::dialogflow::v2::DeleteDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::UpdateDocument(
    google::cloud::dialogflow::v2::UpdateDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::ReloadDocument(
    google::cloud::dialogflow::v2::ReloadDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DocumentsConnectionIdempotencyPolicy::ExportDocument(
    google::cloud::dialogflow::v2::ExportDocumentRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DocumentsConnectionIdempotencyPolicy>
MakeDefaultDocumentsConnectionIdempotencyPolicy() {
  return std::make_unique<DocumentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
