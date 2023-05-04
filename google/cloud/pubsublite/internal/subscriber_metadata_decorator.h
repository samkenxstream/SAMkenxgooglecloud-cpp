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
// source: google/cloud/pubsublite/v1/subscriber.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_SUBSCRIBER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_SUBSCRIBER_METADATA_DECORATOR_H

#include "google/cloud/pubsublite/internal/subscriber_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SubscriberServiceMetadata : public SubscriberServiceStub {
 public:
  ~SubscriberServiceMetadata() override = default;
  explicit SubscriberServiceMetadata(
      std::shared_ptr<SubscriberServiceStub> child);

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::SubscribeRequest,
      google::cloud::pubsublite::v1::SubscribeResponse>>
  AsyncSubscribe(google::cloud::CompletionQueue const& cq,
                 std::shared_ptr<grpc::ClientContext> context) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<SubscriberServiceStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_SUBSCRIBER_METADATA_DECORATOR_H
