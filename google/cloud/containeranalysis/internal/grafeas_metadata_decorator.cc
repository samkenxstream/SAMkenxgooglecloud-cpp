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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/internal/grafeas_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <grafeas/v1/grafeas.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GrafeasMetadata::GrafeasMetadata(std::shared_ptr<GrafeasStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<grafeas::v1::Occurrence> GrafeasMetadata::GetOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::GetOccurrenceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetOccurrence(context, request);
}

StatusOr<grafeas::v1::ListOccurrencesResponse> GrafeasMetadata::ListOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::ListOccurrencesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListOccurrences(context, request);
}

Status GrafeasMetadata::DeleteOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::DeleteOccurrenceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteOccurrence(context, request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasMetadata::CreateOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::CreateOccurrenceRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateOccurrence(context, request);
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
GrafeasMetadata::BatchCreateOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::BatchCreateOccurrencesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BatchCreateOccurrences(context, request);
}

StatusOr<grafeas::v1::Occurrence> GrafeasMetadata::UpdateOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::UpdateOccurrenceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateOccurrence(context, request);
}

StatusOr<grafeas::v1::Note> GrafeasMetadata::GetOccurrenceNote(
    grpc::ClientContext& context,
    grafeas::v1::GetOccurrenceNoteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetOccurrenceNote(context, request);
}

StatusOr<grafeas::v1::Note> GrafeasMetadata::GetNote(
    grpc::ClientContext& context, grafeas::v1::GetNoteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetNote(context, request);
}

StatusOr<grafeas::v1::ListNotesResponse> GrafeasMetadata::ListNotes(
    grpc::ClientContext& context,
    grafeas::v1::ListNotesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListNotes(context, request);
}

Status GrafeasMetadata::DeleteNote(
    grpc::ClientContext& context,
    grafeas::v1::DeleteNoteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteNote(context, request);
}

StatusOr<grafeas::v1::Note> GrafeasMetadata::CreateNote(
    grpc::ClientContext& context,
    grafeas::v1::CreateNoteRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateNote(context, request);
}

StatusOr<grafeas::v1::BatchCreateNotesResponse>
GrafeasMetadata::BatchCreateNotes(
    grpc::ClientContext& context,
    grafeas::v1::BatchCreateNotesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BatchCreateNotes(context, request);
}

StatusOr<grafeas::v1::Note> GrafeasMetadata::UpdateNote(
    grpc::ClientContext& context,
    grafeas::v1::UpdateNoteRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateNote(context, request);
}

StatusOr<grafeas::v1::ListNoteOccurrencesResponse>
GrafeasMetadata::ListNoteOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::ListNoteOccurrencesRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListNoteOccurrences(context, request);
}

void GrafeasMetadata::SetMetadata(grpc::ClientContext& context,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void GrafeasMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google
