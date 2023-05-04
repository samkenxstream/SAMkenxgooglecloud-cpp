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
// source:
// google/cloud/beyondcorp/clientgateways/v1/client_gateways_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_LOGGING_DECORATOR_H

#include "google/cloud/beyondcorp/clientgateways/v1/internal/client_gateways_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace beyondcorp_clientgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ClientGatewaysServiceLogging : public ClientGatewaysServiceStub {
 public:
  ~ClientGatewaysServiceLogging() override = default;
  ClientGatewaysServiceLogging(std::shared_ptr<ClientGatewaysServiceStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  StatusOr<
      google::cloud::beyondcorp::clientgateways::v1::ListClientGatewaysResponse>
  ListClientGateways(grpc::ClientContext& context,
                     google::cloud::beyondcorp::clientgateways::v1::
                         ListClientGatewaysRequest const& request) override;

  StatusOr<google::cloud::beyondcorp::clientgateways::v1::ClientGateway>
  GetClientGateway(grpc::ClientContext& context,
                   google::cloud::beyondcorp::clientgateways::v1::
                       GetClientGatewayRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateClientGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::beyondcorp::clientgateways::v1::
          CreateClientGatewayRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteClientGateway(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::beyondcorp::clientgateways::v1::
          DeleteClientGatewayRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ClientGatewaysServiceStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ClientGatewaysServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientgateways_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BEYONDCORP_CLIENTGATEWAYS_V1_INTERNAL_CLIENT_GATEWAYS_LOGGING_DECORATOR_H
