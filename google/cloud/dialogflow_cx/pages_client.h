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
// source: google/cloud/dialogflow/cx/v3/page.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CLIENT_H

#include "google/cloud/dialogflow_cx/pages_connection.h"
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
/// Service for managing [Pages][google.cloud.dialogflow.cx.v3.Page].
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
/// [google.cloud.dialogflow.cx.v3.Page]:
/// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
///
class PagesClient {
 public:
  explicit PagesClient(std::shared_ptr<PagesConnection> connection,
                       Options opts = {});
  ~PagesClient();

  ///@{
  /// @name Copy and move support
  PagesClient(PagesClient const&) = default;
  PagesClient& operator=(PagesClient const&) = default;
  PagesClient(PagesClient&&) = default;
  PagesClient& operator=(PagesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(PagesClient const& a, PagesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(PagesClient const& a, PagesClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all pages in the specified flow.
  ///
  /// @param parent  Required. The flow to list all pages for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/flows/<Flow ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListPagesRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L405}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Page> ListPages(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all pages in the specified flow.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListPagesRequest,google/cloud/dialogflow/cx/v3/page.proto#L405}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListPagesRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L405}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Page> ListPages(
      google::cloud::dialogflow::cx::v3::ListPagesRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified page.
  ///
  /// @param name  Required. The name of the page.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/flows/<Flow ID>/pages/<Page ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetPageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L461}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> GetPage(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified page.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetPageRequest,google/cloud/dialogflow/cx/v3/page.proto#L461}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetPageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L461}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> GetPage(
      google::cloud::dialogflow::cx::v3::GetPageRequest const& request,
      Options opts = {});

  ///
  /// Creates a page in the specified flow.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param parent  Required. The flow to create a page for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/flows/<Flow ID>`.
  /// @param page  Required. The page to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreatePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L496}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> CreatePage(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Page const& page, Options opts = {});

  ///
  /// Creates a page in the specified flow.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CreatePageRequest,google/cloud/dialogflow/cx/v3/page.proto#L496}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreatePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L496}
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> CreatePage(
      google::cloud::dialogflow::cx::v3::CreatePageRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified page.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param page  Required. The page to update.
  /// @param update_mask  The mask to control which fields get updated. If the
  /// mask is not present,
  ///  all fields will be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  /// [google.cloud.dialogflow.cx.v3.UpdatePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L535}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> UpdatePage(
      google::cloud::dialogflow::cx::v3::Page const& page,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified page.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::UpdatePageRequest,google/cloud/dialogflow/cx/v3/page.proto#L535}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Page,google/cloud/dialogflow/cx/v3/page.proto#L115}
  ///
  /// [google.cloud.dialogflow.cx.v3.Page]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L115}
  /// [google.cloud.dialogflow.cx.v3.UpdatePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L535}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Page> UpdatePage(
      google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified page.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param name  Required. The name of the page to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/Flows/<flow ID>/pages/<Page ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeletePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L568}
  ///
  Status DeletePage(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified page.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::DeletePageRequest,google/cloud/dialogflow/cx/v3/page.proto#L568}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeletePageRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/page.proto#L568}
  ///
  Status DeletePage(
      google::cloud::dialogflow::cx::v3::DeletePageRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<PagesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CLIENT_H
