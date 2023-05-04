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
// source: google/cloud/dialogflow/v2/answer_record.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ANSWER_RECORDS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ANSWER_RECORDS_CLIENT_H

#include "google/cloud/dialogflow_es/answer_records_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [AnswerRecords][google.cloud.dialogflow.v2.AnswerRecord].
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
/// [google.cloud.dialogflow.v2.AnswerRecord]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L98}
///
class AnswerRecordsClient {
 public:
  explicit AnswerRecordsClient(
      std::shared_ptr<AnswerRecordsConnection> connection, Options opts = {});
  ~AnswerRecordsClient();

  ///@{
  /// @name Copy and move support
  AnswerRecordsClient(AnswerRecordsClient const&) = default;
  AnswerRecordsClient& operator=(AnswerRecordsClient const&) = default;
  AnswerRecordsClient(AnswerRecordsClient&&) = default;
  AnswerRecordsClient& operator=(AnswerRecordsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(AnswerRecordsClient const& a,
                         AnswerRecordsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AnswerRecordsClient const& a,
                         AnswerRecordsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all answer records in the specified project in reverse
  /// chronological order.
  ///
  /// @param parent  Required. The project to list all answer records for in
  /// reverse
  ///  chronological order. Format: `projects/<Project ID>/locations/<Location
  ///  ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::AnswerRecord,google/cloud/dialogflow/v2/answer_record.proto#L98}
  ///
  /// [google.cloud.dialogflow.v2.AnswerRecord]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L98}
  /// [google.cloud.dialogflow.v2.ListAnswerRecordsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L125}
  ///
  StreamRange<google::cloud::dialogflow::v2::AnswerRecord> ListAnswerRecords(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all answer records in the specified project in reverse
  /// chronological order.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ListAnswerRecordsRequest,google/cloud/dialogflow/v2/answer_record.proto#L125}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::AnswerRecord,google/cloud/dialogflow/v2/answer_record.proto#L98}
  ///
  /// [google.cloud.dialogflow.v2.AnswerRecord]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L98}
  /// [google.cloud.dialogflow.v2.ListAnswerRecordsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L125}
  ///
  StreamRange<google::cloud::dialogflow::v2::AnswerRecord> ListAnswerRecords(
      google::cloud::dialogflow::v2::ListAnswerRecordsRequest request,
      Options opts = {});

  ///
  /// Updates the specified answer record.
  ///
  /// @param answer_record  Required. Answer record to update.
  /// @param update_mask  Required. The mask to control which fields get
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::AnswerRecord,google/cloud/dialogflow/v2/answer_record.proto#L98}
  ///
  /// [google.cloud.dialogflow.v2.AnswerRecord]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L98}
  /// [google.cloud.dialogflow.v2.UpdateAnswerRecordRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L173}
  ///
  StatusOr<google::cloud::dialogflow::v2::AnswerRecord> UpdateAnswerRecord(
      google::cloud::dialogflow::v2::AnswerRecord const& answer_record,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified answer record.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::UpdateAnswerRecordRequest,google/cloud/dialogflow/v2/answer_record.proto#L173}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::AnswerRecord,google/cloud/dialogflow/v2/answer_record.proto#L98}
  ///
  /// [google.cloud.dialogflow.v2.AnswerRecord]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L98}
  /// [google.cloud.dialogflow.v2.UpdateAnswerRecordRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/answer_record.proto#L173}
  ///
  StatusOr<google::cloud::dialogflow::v2::AnswerRecord> UpdateAnswerRecord(
      google::cloud::dialogflow::v2::UpdateAnswerRecordRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<AnswerRecordsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_ANSWER_RECORDS_CLIENT_H
