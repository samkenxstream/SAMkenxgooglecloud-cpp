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
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/internal/cloud_channel_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceMetadata::CloudChannelServiceMetadata(
    std::shared_ptr<CloudChannelServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
CloudChannelServiceMetadata::ListCustomers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCustomers(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::GetCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceMetadata::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CheckCloudIdentityAccountsExist(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::CreateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::UpdateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  SetMetadata(context, "customer.name=" + request.customer().name());
  return child_->UpdateCustomer(context, request);
}

Status CloudChannelServiceMetadata::DeleteCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceMetadata::ImportCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ImportCustomer(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  SetMetadata(*context, "customer=" + request.customer());
  return child_->AsyncProvisionCloudIdentity(cq, std::move(context), request);
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
CloudChannelServiceMetadata::ListEntitlements(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEntitlements(context, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
CloudChannelServiceMetadata::ListTransferableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTransferableSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
CloudChannelServiceMetadata::ListTransferableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTransferableOffers(context, request);
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceMetadata::GetEntitlement(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetEntitlement(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateEntitlement(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncChangeParameters(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncChangeRenewalSettings(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncChangeOffer(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncStartPaidService(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncSuspendEntitlement(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelEntitlement(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncActivateEntitlement(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncTransferEntitlements(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncTransferEntitlementsToGoogle(cq, std::move(context),
                                                   request);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
CloudChannelServiceMetadata::ListChannelPartnerLinks(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListChannelPartnerLinks(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::GetChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::CreateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceMetadata::UpdateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::GetCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
CloudChannelServiceMetadata::ListCustomerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCustomerRepricingConfigs(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::CreateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceMetadata::UpdateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, "customer_repricing_config.name=" +
                           request.customer_repricing_config().name());
  return child_->UpdateCustomerRepricingConfig(context, request);
}

Status CloudChannelServiceMetadata::DeleteCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
CloudChannelServiceMetadata::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListChannelPartnerRepricingConfigs(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceMetadata::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(context, "channel_partner_repricing_config.name=" +
                           request.channel_partner_repricing_config().name());
  return child_->UpdateChannelPartnerRepricingConfig(context, request);
}

Status CloudChannelServiceMetadata::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceMetadata::LookupOffer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  SetMetadata(context, "entitlement=" + request.entitlement());
  return child_->LookupOffer(context, request);
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
CloudChannelServiceMetadata::ListProducts(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  SetMetadata(context);
  return child_->ListProducts(context, request);
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
CloudChannelServiceMetadata::ListSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
CloudChannelServiceMetadata::ListOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListOffers(context, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
CloudChannelServiceMetadata::ListPurchasableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  SetMetadata(context, "customer=" + request.customer());
  return child_->ListPurchasableSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
CloudChannelServiceMetadata::ListPurchasableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  SetMetadata(context, "customer=" + request.customer());
  return child_->ListPurchasableOffers(context, request);
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceMetadata::RegisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  SetMetadata(context, "account=" + request.account());
  return child_->RegisterSubscriber(context, request);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceMetadata::UnregisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  SetMetadata(context, "account=" + request.account());
  return child_->UnregisterSubscriber(context, request);
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
CloudChannelServiceMetadata::ListSubscribers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  SetMetadata(context, "account=" + request.account());
  return child_->ListSubscribers(context, request);
}

StatusOr<google::cloud::channel::v1::ListEntitlementChangesResponse>
CloudChannelServiceMetadata::ListEntitlementChanges(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementChangesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListEntitlementChanges(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudChannelServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudChannelServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudChannelServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
