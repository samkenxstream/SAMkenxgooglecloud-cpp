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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/versions_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsMetadata::VersionsMetadata(std::shared_ptr<VersionsStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::appengine::v1::ListVersionsResponse>
VersionsMetadata::ListVersions(
    grpc::ClientContext& context,
    google::appengine::v1::ListVersionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListVersions(context, request);
}

StatusOr<google::appengine::v1::Version> VersionsMetadata::GetVersion(
    grpc::ClientContext& context,
    google::appengine::v1::GetVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetVersion(context, request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncCreateVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::CreateVersionRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncUpdateVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::UpdateVersionRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUpdateVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::appengine::v1::DeleteVersionRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> VersionsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void VersionsMetadata::SetMetadata(grpc::ClientContext& context,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void VersionsMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
