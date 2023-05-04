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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/v3/internal/projects_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProjectsTracingStub::ProjectsTracingStub(std::shared_ptr<ProjectsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsTracingStub::GetProject(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "GetProject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProject(context, request));
}

StatusOr<google::cloud::resourcemanager::v3::ListProjectsResponse>
ProjectsTracingStub::ListProjects(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::ListProjectsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "ListProjects");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProjects(context, request));
}

StatusOr<google::cloud::resourcemanager::v3::SearchProjectsResponse>
ProjectsTracingStub::SearchProjects(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::SearchProjectsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "SearchProjects");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchProjects(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncCreateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "CreateProject");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateProject(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncUpdateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "UpdateProject");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateProject(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncMoveProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "MoveProject");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncMoveProject(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncDeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "DeleteProject");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteProject(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncUndeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "UndeleteProject");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUndeleteProject(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::iam::v1::Policy> ProjectsTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> ProjectsTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.resourcemanager.v3.Projects",
                                     "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ProjectsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ProjectsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ProjectsStub> MakeProjectsTracingStub(
    std::shared_ptr<ProjectsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ProjectsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
