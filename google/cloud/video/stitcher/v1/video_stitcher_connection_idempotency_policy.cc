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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/video_stitcher_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_stitcher_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

VideoStitcherServiceConnectionIdempotencyPolicy::
    ~VideoStitcherServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<VideoStitcherServiceConnectionIdempotencyPolicy>
VideoStitcherServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<VideoStitcherServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::CreateCdnKey(
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::ListCdnKeys(
    google::cloud::video::stitcher::v1::ListCdnKeysRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetCdnKey(
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::DeleteCdnKey(
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::UpdateCdnKey(
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::CreateVodSession(
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetVodSession(
    google::cloud::video::stitcher::v1::GetVodSessionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
VideoStitcherServiceConnectionIdempotencyPolicy::ListVodStitchDetails(
    google::cloud::video::stitcher::v1::
        ListVodStitchDetailsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetVodStitchDetail(
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
VideoStitcherServiceConnectionIdempotencyPolicy::ListVodAdTagDetails(
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetVodAdTagDetail(
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
VideoStitcherServiceConnectionIdempotencyPolicy::ListLiveAdTagDetails(
    google::cloud::video::stitcher::v1::
        ListLiveAdTagDetailsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetLiveAdTagDetail(
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::CreateSlate(
    google::cloud::video::stitcher::v1::CreateSlateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::ListSlates(
    google::cloud::video::stitcher::v1::ListSlatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetSlate(
    google::cloud::video::stitcher::v1::GetSlateRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::UpdateSlate(
    google::cloud::video::stitcher::v1::UpdateSlateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::DeleteSlate(
    google::cloud::video::stitcher::v1::DeleteSlateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::CreateLiveSession(
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetLiveSession(
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::CreateLiveConfig(
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::ListLiveConfigs(
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::GetLiveConfig(
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency VideoStitcherServiceConnectionIdempotencyPolicy::DeleteLiveConfig(
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<VideoStitcherServiceConnectionIdempotencyPolicy>
MakeDefaultVideoStitcherServiceConnectionIdempotencyPolicy() {
  return std::make_unique<VideoStitcherServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1
}  // namespace cloud
}  // namespace google
