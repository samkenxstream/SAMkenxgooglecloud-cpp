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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_auth_decorator.h"
#include <google/cloud/dialogflow/v2/entity_type.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesAuth::EntityTypesAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EntityTypesStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
EntityTypesAuth::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEntityTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEntityTypes(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesAuth::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesAuth::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEntityType(context, request);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesAuth::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateEntityType(context, request);
}

Status EntityTypesAuth::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEntityType(context, request);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncBatchUpdateEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchUpdateEntityTypes(cq, *std::move(context),
                                                  request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncBatchDeleteEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchDeleteEntityTypes(cq, *std::move(context),
                                                  request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncBatchCreateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchCreateEntities(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncBatchUpdateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchUpdateEntities(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncBatchDeleteEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchDeleteEntities(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> EntityTypesAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
