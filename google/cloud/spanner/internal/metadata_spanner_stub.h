// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_METADATA_SPANNER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_METADATA_SPANNER_STUB_H

#include "google/cloud/spanner/internal/spanner_stub.h"
#include "google/cloud/spanner/version.h"
#include <grpcpp/grpcpp.h>
#include <string>

namespace google {
namespace cloud {
namespace spanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A SpannerStub that decorates the ClientContext with the right metadata.
 */
class MetadataSpannerStub : public SpannerStub {
 public:
  explicit MetadataSpannerStub(std::shared_ptr<SpannerStub> child,
                               std::string resource_prefix_header);
  ~MetadataSpannerStub() override = default;

  StatusOr<google::spanner::v1::Session> CreateSession(
      grpc::ClientContext& client_context,
      google::spanner::v1::CreateSessionRequest const& request) override;
  StatusOr<google::spanner::v1::BatchCreateSessionsResponse>
  BatchCreateSessions(
      grpc::ClientContext& client_context,
      google::spanner::v1::BatchCreateSessionsRequest const& request) override;
  future<StatusOr<google::spanner::v1::BatchCreateSessionsResponse>>
  AsyncBatchCreateSessions(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::v1::BatchCreateSessionsRequest const& request) override;
  Status DeleteSession(
      grpc::ClientContext& client_context,
      google::spanner::v1::DeleteSessionRequest const& request) override;
  future<Status> AsyncDeleteSession(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::v1::DeleteSessionRequest const& request) override;
  StatusOr<google::spanner::v1::ResultSet> ExecuteSql(
      grpc::ClientContext& client_context,
      google::spanner::v1::ExecuteSqlRequest const& request) override;
  future<StatusOr<google::spanner::v1::ResultSet>> AsyncExecuteSql(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::spanner::v1::ExecuteSqlRequest const& request) override;
  std::unique_ptr<
      grpc::ClientReaderInterface<google::spanner::v1::PartialResultSet>>
  ExecuteStreamingSql(
      grpc::ClientContext& client_context,
      google::spanner::v1::ExecuteSqlRequest const& request) override;
  StatusOr<google::spanner::v1::ExecuteBatchDmlResponse> ExecuteBatchDml(
      grpc::ClientContext& client_context,
      google::spanner::v1::ExecuteBatchDmlRequest const& request) override;
  std::unique_ptr<
      grpc::ClientReaderInterface<google::spanner::v1::PartialResultSet>>
  StreamingRead(grpc::ClientContext& client_context,
                google::spanner::v1::ReadRequest const& request) override;
  StatusOr<google::spanner::v1::Transaction> BeginTransaction(
      grpc::ClientContext& client_context,
      google::spanner::v1::BeginTransactionRequest const& request) override;
  StatusOr<google::spanner::v1::CommitResponse> Commit(
      grpc::ClientContext& client_context,
      google::spanner::v1::CommitRequest const& request) override;
  Status Rollback(grpc::ClientContext& client_context,
                  google::spanner::v1::RollbackRequest const& request) override;
  StatusOr<google::spanner::v1::PartitionResponse> PartitionQuery(
      grpc::ClientContext& client_context,
      google::spanner::v1::PartitionQueryRequest const& request) override;
  StatusOr<google::spanner::v1::PartitionResponse> PartitionRead(
      grpc::ClientContext& client_context,
      google::spanner::v1::PartitionReadRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);

  std::shared_ptr<SpannerStub> child_;
  std::string api_client_header_;
  std::string resource_prefix_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_INTERNAL_METADATA_SPANNER_STUB_H
