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
// source: google/cloud/redis/v1/cloud_redis.proto

#include "google/cloud/redis/v1/internal/cloud_redis_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace redis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudRedisTracingConnection::CloudRedisTracingConnection(
    std::shared_ptr<redis_v1::CloudRedisConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::redis::v1::Instance>
CloudRedisTracingConnection::ListInstances(
    google::cloud::redis::v1::ListInstancesRequest request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInstances(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::redis::v1::Instance>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::redis::v1::Instance>
CloudRedisTracingConnection::GetInstance(
    google::cloud::redis::v1::GetInstanceRequest const& request) {
  auto span = internal::MakeSpan("redis_v1::CloudRedisConnection::GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstance(request));
}

StatusOr<google::cloud::redis::v1::InstanceAuthString>
CloudRedisTracingConnection::GetInstanceAuthString(
    google::cloud::redis::v1::GetInstanceAuthStringRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_v1::CloudRedisConnection::GetInstanceAuthString");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInstanceAuthString(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::CreateInstance(
    google::cloud::redis::v1::CreateInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::CreateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::UpdateInstance(
    google::cloud::redis::v1::UpdateInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::UpdateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::UpgradeInstance(
    google::cloud::redis::v1::UpgradeInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::UpgradeInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpgradeInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::ImportInstance(
    google::cloud::redis::v1::ImportInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::ImportInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ImportInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::ExportInstance(
    google::cloud::redis::v1::ExportInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::ExportInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->ExportInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::FailoverInstance(
    google::cloud::redis::v1::FailoverInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::FailoverInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->FailoverInstance(request));
}

future<StatusOr<google::cloud::redis::v1::OperationMetadata>>
CloudRedisTracingConnection::DeleteInstance(
    google::cloud::redis::v1::DeleteInstanceRequest const& request) {
  auto span =
      internal::MakeSpan("redis_v1::CloudRedisConnection::DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInstance(request));
}

future<StatusOr<google::cloud::redis::v1::Instance>>
CloudRedisTracingConnection::RescheduleMaintenance(
    google::cloud::redis::v1::RescheduleMaintenanceRequest const& request) {
  auto span = internal::MakeSpan(
      "redis_v1::CloudRedisConnection::RescheduleMaintenance");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RescheduleMaintenance(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<redis_v1::CloudRedisConnection> MakeCloudRedisTracingConnection(
    std::shared_ptr<redis_v1::CloudRedisConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudRedisTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1_internal
}  // namespace cloud
}  // namespace google
