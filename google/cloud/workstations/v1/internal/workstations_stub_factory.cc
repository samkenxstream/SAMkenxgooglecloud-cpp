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
// source: google/cloud/workstations/v1/workstations.proto

#include "google/cloud/workstations/v1/internal/workstations_stub_factory.h"
#include "google/cloud/workstations/v1/internal/workstations_auth_decorator.h"
#include "google/cloud/workstations/v1/internal/workstations_logging_decorator.h"
#include "google/cloud/workstations/v1/internal/workstations_metadata_decorator.h"
#include "google/cloud/workstations/v1/internal/workstations_stub.h"
#include "google/cloud/workstations/v1/internal/workstations_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/workstations/v1/workstations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace workstations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<WorkstationsStub> CreateDefaultWorkstationsStub(
    google::cloud::CompletionQueue cq, Options const& options) {
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      std::move(cq), options);
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::workstations::v1::Workstations::NewStub(channel);
  std::shared_ptr<WorkstationsStub> stub =
      std::make_shared<DefaultWorkstationsStub>(
          std::move(service_grpc_stub),
          google::longrunning::Operations::NewStub(channel));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<WorkstationsAuth>(std::move(auth), std::move(stub));
  }
  stub = std::make_shared<WorkstationsMetadata>(std::move(stub));
  if (internal::Contains(options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<WorkstationsLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeWorkstationsTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1_internal
}  // namespace cloud
}  // namespace google
