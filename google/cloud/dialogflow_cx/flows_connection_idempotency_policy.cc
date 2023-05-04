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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#include "google/cloud/dialogflow_cx/flows_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

FlowsConnectionIdempotencyPolicy::~FlowsConnectionIdempotencyPolicy() = default;

std::unique_ptr<FlowsConnectionIdempotencyPolicy>
FlowsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<FlowsConnectionIdempotencyPolicy>(*this);
}

Idempotency FlowsConnectionIdempotencyPolicy::CreateFlow(
    google::cloud::dialogflow::cx::v3::CreateFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::DeleteFlow(
    google::cloud::dialogflow::cx::v3::DeleteFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::ListFlows(
    google::cloud::dialogflow::cx::v3::ListFlowsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::GetFlow(
    google::cloud::dialogflow::cx::v3::GetFlowRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::UpdateFlow(
    google::cloud::dialogflow::cx::v3::UpdateFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::TrainFlow(
    google::cloud::dialogflow::cx::v3::TrainFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::ValidateFlow(
    google::cloud::dialogflow::cx::v3::ValidateFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::GetFlowValidationResult(
    google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::ImportFlow(
    google::cloud::dialogflow::cx::v3::ImportFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FlowsConnectionIdempotencyPolicy::ExportFlow(
    google::cloud::dialogflow::cx::v3::ExportFlowRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<FlowsConnectionIdempotencyPolicy>
MakeDefaultFlowsConnectionIdempotencyPolicy() {
  return std::make_unique<FlowsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
