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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_STUB_H

#include "google/cloud/vision/v1/internal/product_search_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ProductSearchTracingStub : public ProductSearchStub {
 public:
  ~ProductSearchTracingStub() override = default;

  explicit ProductSearchTracingStub(std::shared_ptr<ProductSearchStub> child);

  StatusOr<google::cloud::vision::v1::ProductSet> CreateProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::CreateProductSetRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::ListProductSetsResponse> ListProductSets(
      grpc::ClientContext& context,
      google::cloud::vision::v1::ListProductSetsRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::ProductSet> GetProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::GetProductSetRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ProductSet> UpdateProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::UpdateProductSetRequest const& request)
      override;

  Status DeleteProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::DeleteProductSetRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::Product> CreateProduct(
      grpc::ClientContext& context,
      google::cloud::vision::v1::CreateProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ListProductsResponse> ListProducts(
      grpc::ClientContext& context,
      google::cloud::vision::v1::ListProductsRequest const& request) override;

  StatusOr<google::cloud::vision::v1::Product> GetProduct(
      grpc::ClientContext& context,
      google::cloud::vision::v1::GetProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::Product> UpdateProduct(
      grpc::ClientContext& context,
      google::cloud::vision::v1::UpdateProductRequest const& request) override;

  Status DeleteProduct(
      grpc::ClientContext& context,
      google::cloud::vision::v1::DeleteProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> CreateReferenceImage(
      grpc::ClientContext& context,
      google::cloud::vision::v1::CreateReferenceImageRequest const& request)
      override;

  Status DeleteReferenceImage(
      grpc::ClientContext& context,
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
  ListReferenceImages(
      grpc::ClientContext& context,
      google::cloud::vision::v1::ListReferenceImagesRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> GetReferenceImage(
      grpc::ClientContext& context,
      google::cloud::vision::v1::GetReferenceImageRequest const& request)
      override;

  Status AddProductToProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::AddProductToProductSetRequest const& request)
      override;

  Status RemoveProductFromProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request) override;

  StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
  ListProductsInProductSet(
      grpc::ClientContext& context,
      google::cloud::vision::v1::ListProductsInProductSetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportProductSets(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::ImportProductSetsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncPurgeProducts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::vision::v1::PurgeProductsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ProductSearchStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ProductSearchStub> MakeProductSearchTracingStub(
    std::shared_ptr<ProductSearchStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_STUB_H
