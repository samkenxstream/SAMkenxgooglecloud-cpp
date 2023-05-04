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
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/v1/cloud_functions_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace functions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudFunctionsServiceConnectionIdempotencyPolicy::
    ~CloudFunctionsServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudFunctionsServiceConnectionIdempotencyPolicy>
CloudFunctionsServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudFunctionsServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::ListFunctions(
    google::cloud::functions::v1::ListFunctionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::GetFunction(
    google::cloud::functions::v1::GetFunctionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::CreateFunction(
    google::cloud::functions::v1::CreateFunctionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::UpdateFunction(
    google::cloud::functions::v1::UpdateFunctionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::DeleteFunction(
    google::cloud::functions::v1::DeleteFunctionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::CallFunction(
    google::cloud::functions::v1::CallFunctionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::GenerateUploadUrl(
    google::cloud::functions::v1::GenerateUploadUrlRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudFunctionsServiceConnectionIdempotencyPolicy::GenerateDownloadUrl(
    google::cloud::functions::v1::GenerateDownloadUrlRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency CloudFunctionsServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CloudFunctionsServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<CloudFunctionsServiceConnectionIdempotencyPolicy>
MakeDefaultCloudFunctionsServiceConnectionIdempotencyPolicy() {
  return std::make_unique<CloudFunctionsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1
}  // namespace cloud
}  // namespace google
