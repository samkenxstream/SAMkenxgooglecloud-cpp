// Copyright 2021 Google LLC
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
// source: google/cloud/tasks/v2/cloudtasks.proto

#include "google/cloud/tasks/v2/cloud_tasks_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace tasks_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudTasksConnectionIdempotencyPolicy::
    ~CloudTasksConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudTasksConnectionIdempotencyPolicy>
CloudTasksConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudTasksConnectionIdempotencyPolicy>(*this);
}

Idempotency CloudTasksConnectionIdempotencyPolicy::ListQueues(
    google::cloud::tasks::v2::ListQueuesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::GetQueue(
    google::cloud::tasks::v2::GetQueueRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::CreateQueue(
    google::cloud::tasks::v2::CreateQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::UpdateQueue(
    google::cloud::tasks::v2::UpdateQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::DeleteQueue(
    google::cloud::tasks::v2::DeleteQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::PurgeQueue(
    google::cloud::tasks::v2::PurgeQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::PauseQueue(
    google::cloud::tasks::v2::PauseQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::ResumeQueue(
    google::cloud::tasks::v2::ResumeQueueRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::ListTasks(
    google::cloud::tasks::v2::ListTasksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::GetTask(
    google::cloud::tasks::v2::GetTaskRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::CreateTask(
    google::cloud::tasks::v2::CreateTaskRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::DeleteTask(
    google::cloud::tasks::v2::DeleteTaskRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudTasksConnectionIdempotencyPolicy::RunTask(
    google::cloud::tasks::v2::RunTaskRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<CloudTasksConnectionIdempotencyPolicy>
MakeDefaultCloudTasksConnectionIdempotencyPolicy() {
  return std::make_unique<CloudTasksConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tasks_v2
}  // namespace cloud
}  // namespace google
