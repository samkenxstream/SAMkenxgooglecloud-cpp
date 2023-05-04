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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/internal/async_streaming_read_rpc_impl.h"
#include "google/cloud/internal/async_streaming_write_rpc_impl.h"
#include "google/cloud/internal/streaming_write_rpc_impl.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenKitchenSinkStub::~GoldenKitchenSinkStub() = default;

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
DefaultGoldenKitchenSinkStub::GenerateAccessToken(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
    google::test::admin::database::v1::GenerateAccessTokenResponse response;
    auto status =
        grpc_stub_->GenerateAccessToken(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
DefaultGoldenKitchenSinkStub::GenerateIdToken(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
    google::test::admin::database::v1::GenerateIdTokenResponse response;
    auto status =
        grpc_stub_->GenerateIdToken(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
DefaultGoldenKitchenSinkStub::WriteLogEntries(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
    google::test::admin::database::v1::WriteLogEntriesResponse response;
    auto status =
        grpc_stub_->WriteLogEntries(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
DefaultGoldenKitchenSinkStub::ListLogs(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ListLogsRequest const& request) {
    google::test::admin::database::v1::ListLogsResponse response;
    auto status =
        grpc_stub_->ListLogs(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
DefaultGoldenKitchenSinkStub::ListServiceAccountKeys(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
    google::test::admin::database::v1::ListServiceAccountKeysResponse response;
    auto status =
        grpc_stub_->ListServiceAccountKeys(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

Status
DefaultGoldenKitchenSinkStub::DoNothing(
  grpc::ClientContext& client_context,
  google::protobuf::Empty const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->DoNothing(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

Status
DefaultGoldenKitchenSinkStub::Deprecated2(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->Deprecated2(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<google::test::admin::database::v1::Response>>
DefaultGoldenKitchenSinkStub::StreamingRead(
    std::shared_ptr<grpc::ClientContext> client_context,
    google::test::admin::database::v1::Request const& request) {
  auto stream = grpc_stub_->StreamingRead(client_context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::test::admin::database::v1::Response>>(
      std::move(client_context), std::move(stream));
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::test::admin::database::v1::Request,
    google::test::admin::database::v1::Response>>
DefaultGoldenKitchenSinkStub::StreamingWrite(
    std::shared_ptr<grpc::ClientContext> context) {
  auto response = std::make_unique<google::test::admin::database::v1::Response>();
  auto stream = grpc_stub_->StreamingWrite(context.get(), response.get());
  return std::make_unique<::google::cloud::internal::StreamingWriteRpcImpl<
      google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>(
    std::move(context), std::move(response), std::move(stream));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::test::admin::database::v1::Request,
    google::test::admin::database::v1::Response>>
DefaultGoldenKitchenSinkStub::AsyncStreamingReadWrite(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingReadWrite(context, cq);
      });
}

Status
DefaultGoldenKitchenSinkStub::ExplicitRouting1(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->ExplicitRouting1(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

Status
DefaultGoldenKitchenSinkStub::ExplicitRouting2(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
    google::protobuf::Empty response;
    auto status =
        grpc_stub_->ExplicitRouting2(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return google::cloud::Status();
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::test::admin::database::v1::Response>>
DefaultGoldenKitchenSinkStub::AsyncStreamingRead(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::test::admin::database::v1::Request const& request) {
  return google::cloud::internal::MakeStreamingReadRpc<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>(
    cq, std::move(context), request,
    [this](grpc::ClientContext* context, google::test::admin::database::v1::Request const& request, grpc::CompletionQueue* cq) {
      return grpc_stub_->PrepareAsyncStreamingRead(context, request, cq);
    });
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>
DefaultGoldenKitchenSinkStub::AsyncStreamingWrite(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingWriteRpc<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>(
    cq, std::move(context),
    [this](grpc::ClientContext* context, google::test::admin::database::v1::Response* response, grpc::CompletionQueue* cq) {
      return grpc_stub_->PrepareAsyncStreamingWrite(context, response, cq);
    });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
