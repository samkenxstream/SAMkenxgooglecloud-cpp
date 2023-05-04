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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/v1/eventarc_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EventarcConnectionIdempotencyPolicy::~EventarcConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<EventarcConnectionIdempotencyPolicy>
EventarcConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<EventarcConnectionIdempotencyPolicy>(*this);
}

Idempotency EventarcConnectionIdempotencyPolicy::GetTrigger(
    google::cloud::eventarc::v1::GetTriggerRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::ListTriggers(
    google::cloud::eventarc::v1::ListTriggersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::CreateTrigger(
    google::cloud::eventarc::v1::CreateTriggerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::UpdateTrigger(
    google::cloud::eventarc::v1::UpdateTriggerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::DeleteTrigger(
    google::cloud::eventarc::v1::DeleteTriggerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::GetChannel(
    google::cloud::eventarc::v1::GetChannelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::ListChannels(
    google::cloud::eventarc::v1::ListChannelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::CreateChannel(
    google::cloud::eventarc::v1::CreateChannelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::UpdateChannel(
    google::cloud::eventarc::v1::UpdateChannelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::DeleteChannel(
    google::cloud::eventarc::v1::DeleteChannelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::GetProvider(
    google::cloud::eventarc::v1::GetProviderRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::ListProviders(
    google::cloud::eventarc::v1::ListProvidersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::GetChannelConnection(
    google::cloud::eventarc::v1::GetChannelConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::ListChannelConnections(
    google::cloud::eventarc::v1::ListChannelConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::CreateChannelConnection(
    google::cloud::eventarc::v1::CreateChannelConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::DeleteChannelConnection(
    google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::GetGoogleChannelConfig(
    google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EventarcConnectionIdempotencyPolicy::UpdateGoogleChannelConfig(
    google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EventarcConnectionIdempotencyPolicy>
MakeDefaultEventarcConnectionIdempotencyPolicy() {
  return std::make_unique<EventarcConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1
}  // namespace cloud
}  // namespace google
