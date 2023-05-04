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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/v1/internal/data_catalog_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataCatalogTracingStub::DataCatalogTracingStub(
    std::shared_ptr<DataCatalogStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::datacatalog::v1::SearchCatalogResponse>
DataCatalogTracingStub::SearchCatalog(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::SearchCatalogRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "SearchCatalog");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchCatalog(context, request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::CreateEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "CreateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateEntryGroup(context, request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::GetEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "GetEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetEntryGroup(context, request));
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::UpdateEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UpdateEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateEntryGroup(context, request));
}

Status DataCatalogTracingStub::DeleteEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "DeleteEntryGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteEntryGroup(context, request));
}

StatusOr<google::cloud::datacatalog::v1::ListEntryGroupsResponse>
DataCatalogTracingStub::ListEntryGroups(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListEntryGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ListEntryGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntryGroups(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::CreateEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "CreateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateEntry(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::UpdateEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UpdateEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateEntry(context, request));
}

Status DataCatalogTracingStub::DeleteEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "DeleteEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteEntry(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::GetEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "GetEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetEntry(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::LookupEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "LookupEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->LookupEntry(context, request));
}

StatusOr<google::cloud::datacatalog::v1::ListEntriesResponse>
DataCatalogTracingStub::ListEntries(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ListEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntries(context, request));
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogTracingStub::ModifyEntryOverview(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ModifyEntryOverview");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ModifyEntryOverview(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogTracingStub::ModifyEntryContacts(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ModifyEntryContacts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ModifyEntryContacts(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::CreateTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "CreateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTagTemplate(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::GetTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "GetTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetTagTemplate(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::UpdateTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UpdateTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateTagTemplate(context, request));
}

Status DataCatalogTracingStub::DeleteTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "DeleteTagTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTagTemplate(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::CreateTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "CreateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTagTemplateField(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::UpdateTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UpdateTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateTagTemplateField(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::RenameTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "RenameTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RenameTagTemplateField(context, request));
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::RenameTagTemplateFieldEnumValue(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "RenameTagTemplateFieldEnumValue");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->RenameTagTemplateFieldEnumValue(context, request));
}

Status DataCatalogTracingStub::DeleteTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "DeleteTagTemplateField");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTagTemplateField(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogTracingStub::CreateTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "CreateTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->CreateTag(context, request));
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogTracingStub::UpdateTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UpdateTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->UpdateTag(context, request));
}

Status DataCatalogTracingStub::DeleteTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "DeleteTag");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->DeleteTag(context, request));
}

StatusOr<google::cloud::datacatalog::v1::ListTagsResponse>
DataCatalogTracingStub::ListTags(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListTagsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ListTags");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListTags(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataCatalogTracingStub::AsyncReconcileTags(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::v1::ReconcileTagsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ReconcileTags");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncReconcileTags(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogTracingStub::StarEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::StarEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "StarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->StarEntry(context, request));
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogTracingStub::UnstarEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "UnstarEntry");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UnstarEntry(context, request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DataCatalogTracingStub::AsyncImportEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::datacatalog::v1::ImportEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.datacatalog.v1.DataCatalog",
                                     "ImportEntries");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncImportEntries(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
DataCatalogTracingStub::AsyncGetOperation(
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

future<Status> DataCatalogTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DataCatalogStub> MakeDataCatalogTracingStub(
    std::shared_ptr<DataCatalogStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataCatalogTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google
