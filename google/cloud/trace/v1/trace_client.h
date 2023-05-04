// Copyright 2023 Google LLC
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
// source: google/devtools/cloudtrace/v1/trace.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_TRACE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_TRACE_CLIENT_H

#include "google/cloud/trace/v1/trace_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace trace_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This file describes an API for collecting and viewing traces and spans
/// within a trace.  A Trace is a collection of spans corresponding to a single
/// operation or set of operations for an application. A span is an individual
/// timed event which forms a node of the trace tree. Spans for a single trace
/// may span multiple services.
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
class TraceServiceClient {
 public:
  explicit TraceServiceClient(
      std::shared_ptr<TraceServiceConnection> connection, Options opts = {});
  ~TraceServiceClient();

  ///@{
  /// @name Copy and move support
  TraceServiceClient(TraceServiceClient const&) = default;
  TraceServiceClient& operator=(TraceServiceClient const&) = default;
  TraceServiceClient(TraceServiceClient&&) = default;
  TraceServiceClient& operator=(TraceServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TraceServiceClient const& a,
                         TraceServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TraceServiceClient const& a,
                         TraceServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns of a list of traces that match the specified filter conditions.
  ///
  /// @param project_id  Required. ID of the Cloud project where the trace data
  /// is stored.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::devtools::cloudtrace::v1::Trace,google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  /// [google.devtools.cloudtrace.v1.ListTracesRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L185}
  /// [google.devtools.cloudtrace.v1.Trace]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  StreamRange<google::devtools::cloudtrace::v1::Trace> ListTraces(
      std::string const& project_id, Options opts = {});

  ///
  /// Returns of a list of traces that match the specified filter conditions.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::cloudtrace::v1::ListTracesRequest,google/devtools/cloudtrace/v1/trace.proto#L185}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::devtools::cloudtrace::v1::Trace,google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  /// [google.devtools.cloudtrace.v1.ListTracesRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L185}
  /// [google.devtools.cloudtrace.v1.Trace]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  StreamRange<google::devtools::cloudtrace::v1::Trace> ListTraces(
      google::devtools::cloudtrace::v1::ListTracesRequest request,
      Options opts = {});

  ///
  /// Gets a single trace by its ID.
  ///
  /// @param project_id  Required. ID of the Cloud project where the trace data
  /// is stored.
  /// @param trace_id  Required. ID of the trace to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::devtools::cloudtrace::v1::Trace,google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  /// [google.devtools.cloudtrace.v1.GetTraceRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L289}
  /// [google.devtools.cloudtrace.v1.Trace]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  StatusOr<google::devtools::cloudtrace::v1::Trace> GetTrace(
      std::string const& project_id, std::string const& trace_id,
      Options opts = {});

  ///
  /// Gets a single trace by its ID.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::cloudtrace::v1::GetTraceRequest,google/devtools/cloudtrace/v1/trace.proto#L289}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::devtools::cloudtrace::v1::Trace,google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  /// [google.devtools.cloudtrace.v1.GetTraceRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L289}
  /// [google.devtools.cloudtrace.v1.Trace]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L78}
  ///
  StatusOr<google::devtools::cloudtrace::v1::Trace> GetTrace(
      google::devtools::cloudtrace::v1::GetTraceRequest const& request,
      Options opts = {});

  ///
  /// Sends new traces to Stackdriver Trace or updates existing traces. If the
  /// ID of a trace that you send matches that of an existing trace, any fields
  /// in the existing trace and its spans are overwritten by the provided
  /// values, and any new fields provided are merged with the existing trace
  /// data. If the ID does not match, a new trace is created.
  ///
  /// @param project_id  Required. ID of the Cloud project where the trace data
  /// is stored.
  /// @param traces  Required. The body of the message.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.devtools.cloudtrace.v1.PatchTracesRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L298}
  ///
  Status PatchTraces(std::string const& project_id,
                     google::devtools::cloudtrace::v1::Traces const& traces,
                     Options opts = {});

  ///
  /// Sends new traces to Stackdriver Trace or updates existing traces. If the
  /// ID of a trace that you send matches that of an existing trace, any fields
  /// in the existing trace and its spans are overwritten by the provided
  /// values, and any new fields provided are merged with the existing trace
  /// data. If the ID does not match, a new trace is created.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::cloudtrace::v1::PatchTracesRequest,google/devtools/cloudtrace/v1/trace.proto#L298}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.devtools.cloudtrace.v1.PatchTracesRequest]:
  /// @googleapis_reference_link{google/devtools/cloudtrace/v1/trace.proto#L298}
  ///
  Status PatchTraces(
      google::devtools::cloudtrace::v1::PatchTracesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<TraceServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_TRACE_CLIENT_H
