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
// source: google/cloud/dialogflow/v2/participant.proto

#include "google/cloud/dialogflow_es/internal/participants_auth_decorator.h"
#include "google/cloud/internal/async_read_write_stream_auth.h"
#include <google/cloud/dialogflow/v2/participant.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ParticipantsAuth::ParticipantsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ParticipantsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsAuth::CreateParticipant(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateParticipantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateParticipant(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsAuth::GetParticipant(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetParticipantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetParticipant(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListParticipantsResponse>
ParticipantsAuth::ListParticipants(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListParticipantsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListParticipants(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsAuth::UpdateParticipant(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateParticipantRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateParticipant(context, request);
}

StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
ParticipantsAuth::AnalyzeContent(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnalyzeContent(context, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
    google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
ParticipantsAuth::AsyncStreamingAnalyzeContent(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  using StreamAuth = google::cloud::internal::AsyncStreamingReadWriteRpcAuth<
      google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
      google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>;

  auto& child = child_;
  auto call = [child, cq](std::shared_ptr<grpc::ClientContext> ctx) {
    return child->AsyncStreamingAnalyzeContent(cq, std::move(ctx));
  };
  return std::make_unique<StreamAuth>(
      std::move(context), auth_, StreamAuth::StreamFactory(std::move(call)));
}

StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
ParticipantsAuth::SuggestArticles(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SuggestArticlesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SuggestArticles(context, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
ParticipantsAuth::SuggestFaqAnswers(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SuggestFaqAnswers(context, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
ParticipantsAuth::SuggestSmartReplies(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SuggestSmartReplies(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
