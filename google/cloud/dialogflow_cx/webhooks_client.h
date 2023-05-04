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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CLIENT_H

#include "google/cloud/dialogflow_cx/webhooks_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Webhooks][google.cloud.dialogflow.cx.v3.Webhook].
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
/// [google.cloud.dialogflow.cx.v3.Webhook]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
///
class WebhooksClient {
 public:
  explicit WebhooksClient(std::shared_ptr<WebhooksConnection> connection,
                          Options opts = {});
  ~WebhooksClient();

  ///@{
  /// @name Copy and move support
  WebhooksClient(WebhooksClient const&) = default;
  WebhooksClient& operator=(WebhooksClient const&) = default;
  WebhooksClient(WebhooksClient&&) = default;
  WebhooksClient& operator=(WebhooksClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(WebhooksClient const& a, WebhooksClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(WebhooksClient const& a, WebhooksClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all webhooks in the specified agent.
  ///
  /// @param parent  Required. The agent to list all webhooks for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListWebhooksRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L187}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Webhook> ListWebhooks(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all webhooks in the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListWebhooksRequest,google/cloud/dialogflow/cx/v3/webhook.proto#L187}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListWebhooksRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L187}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Webhook> ListWebhooks(
      google::cloud::dialogflow::cx::v3::ListWebhooksRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified webhook.
  ///
  /// @param name  Required. The name of the webhook.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/webhooks/<Webhook ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L219}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> GetWebhook(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified webhook.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetWebhookRequest,google/cloud/dialogflow/cx/v3/webhook.proto#L219}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L219}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> GetWebhook(
      google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request,
      Options opts = {});

  ///
  /// Creates a webhook in the specified agent.
  ///
  /// @param parent  Required. The agent to create a webhook for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>`.
  /// @param webhook  Required. The webhook to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L233}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> CreateWebhook(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Webhook const& webhook,
      Options opts = {});

  ///
  /// Creates a webhook in the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CreateWebhookRequest,google/cloud/dialogflow/cx/v3/webhook.proto#L233}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L233}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> CreateWebhook(
      google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified webhook.
  ///
  /// @param webhook  Required. The webhook to update.
  /// @param update_mask  The mask to control which fields get updated. If the
  /// mask is not present,
  ///  all fields will be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L249}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> UpdateWebhook(
      google::cloud::dialogflow::cx::v3::Webhook const& webhook,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified webhook.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::UpdateWebhookRequest,google/cloud/dialogflow/cx/v3/webhook.proto#L249}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Webhook,google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L249}
  /// [google.cloud.dialogflow.cx.v3.Webhook]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L96}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> UpdateWebhook(
      google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified webhook.
  ///
  /// @param name  Required. The name of the webhook to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/webhooks/<Webhook ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L260}
  ///
  Status DeleteWebhook(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified webhook.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::DeleteWebhookRequest,google/cloud/dialogflow/cx/v3/webhook.proto#L260}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteWebhookRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/webhook.proto#L260}
  ///
  Status DeleteWebhook(
      google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<WebhooksConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_WEBHOOKS_CLIENT_H
