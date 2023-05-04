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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_H

#include "google/cloud/bigquery/storage/v1/bigquery_write_connection_idempotency_policy.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/storage/v1/storage.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_storage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using BigQueryWriteRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        bigquery_storage_v1_internal::BigQueryWriteRetryTraits>;

using BigQueryWriteLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        bigquery_storage_v1_internal::BigQueryWriteRetryTraits>;

using BigQueryWriteLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        bigquery_storage_v1_internal::BigQueryWriteRetryTraits>;

/**
 * The `BigQueryWriteConnection` object for `BigQueryWriteClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `BigQueryWriteClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `BigQueryWriteClient`.
 *
 * To create a concrete instance, see `MakeBigQueryWriteConnection()`.
 *
 * For mocking, see `bigquery_storage_v1_mocks::MockBigQueryWriteConnection`.
 */
class BigQueryWriteConnection {
 public:
  virtual ~BigQueryWriteConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
  CreateWriteStream(
      google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
          request);

  virtual std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::bigquery::storage::v1::AppendRowsRequest,
      google::cloud::bigquery::storage::v1::AppendRowsResponse>>
  AsyncAppendRows();

  virtual StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
  GetWriteStream(
      google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
          request);

  virtual StatusOr<
      google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
  FinalizeWriteStream(
      google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
          request);

  virtual StatusOr<
      google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
  BatchCommitWriteStreams(google::cloud::bigquery::storage::v1::
                              BatchCommitWriteStreamsRequest const& request);

  virtual StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
  FlushRows(
      google::cloud::bigquery::storage::v1::FlushRowsRequest const& request);
};

/**
 * A factory function to construct an object of type `BigQueryWriteConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of BigQueryWriteClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `BigQueryWriteConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::bigquery_storage_v1::BigQueryWritePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `BigQueryWriteConnection` created by
 * this function.
 */
std::shared_ptr<BigQueryWriteConnection> MakeBigQueryWriteConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_STORAGE_V1_BIGQUERY_WRITE_CONNECTION_H
