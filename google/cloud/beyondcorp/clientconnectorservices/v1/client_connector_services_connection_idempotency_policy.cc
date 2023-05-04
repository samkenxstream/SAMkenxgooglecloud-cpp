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
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#include "google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_clientconnectorservices_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    ~ClientConnectorServicesServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ClientConnectorServicesServiceConnectionIdempotencyPolicy>
ClientConnectorServicesServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      ClientConnectorServicesServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    ListClientConnectorServices(
        google::cloud::beyondcorp::clientconnectorservices::v1::
            ListClientConnectorServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    GetClientConnectorService(
        google::cloud::beyondcorp::clientconnectorservices::v1::
            GetClientConnectorServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    CreateClientConnectorService(
        google::cloud::beyondcorp::clientconnectorservices::v1::
            CreateClientConnectorServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    UpdateClientConnectorService(
        google::cloud::beyondcorp::clientconnectorservices::v1::
            UpdateClientConnectorServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClientConnectorServicesServiceConnectionIdempotencyPolicy::
    DeleteClientConnectorService(
        google::cloud::beyondcorp::clientconnectorservices::v1::
            DeleteClientConnectorServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ClientConnectorServicesServiceConnectionIdempotencyPolicy>
MakeDefaultClientConnectorServicesServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      ClientConnectorServicesServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_clientconnectorservices_v1
}  // namespace cloud
}  // namespace google
