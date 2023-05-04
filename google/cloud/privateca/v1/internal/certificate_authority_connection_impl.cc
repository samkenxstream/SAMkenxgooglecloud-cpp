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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/v1/internal/certificate_authority_connection_impl.h"
#include "google/cloud/privateca/v1/internal/certificate_authority_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace privateca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateAuthorityServiceConnectionImpl::
    CertificateAuthorityServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<privateca_v1_internal::CertificateAuthorityServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          CertificateAuthorityServiceConnection::options())) {}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnectionImpl::CreateCertificate(
    google::cloud::security::privateca::v1::CreateCertificateRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCertificate(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 CreateCertificateRequest const& request) {
        return stub_->CreateCertificate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnectionImpl::GetCertificate(
    google::cloud::security::privateca::v1::GetCertificateRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCertificate(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::security::privateca::v1::GetCertificateRequest const&
              request) { return stub_->GetCertificate(context, request); },
      request, __func__);
}

StreamRange<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnectionImpl::ListCertificates(
    google::cloud::security::privateca::v1::ListCertificatesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      privateca_v1::CertificateAuthorityServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCertificates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::security::privateca::v1::Certificate>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::security::privateca::v1::ListCertificatesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::security::privateca::v1::
                       ListCertificatesRequest const& request) {
              return stub->ListCertificates(context, request);
            },
            r, function_name);
      },
      [](google::cloud::security::privateca::v1::ListCertificatesResponse r) {
        std::vector<google::cloud::security::privateca::v1::Certificate> result(
            r.certificates().size());
        auto& messages = *r.mutable_certificates();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnectionImpl::RevokeCertificate(
    google::cloud::security::privateca::v1::RevokeCertificateRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->RevokeCertificate(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 RevokeCertificateRequest const& request) {
        return stub_->RevokeCertificate(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::security::privateca::v1::Certificate>
CertificateAuthorityServiceConnectionImpl::UpdateCertificate(
    google::cloud::security::privateca::v1::UpdateCertificateRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCertificate(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRequest const& request) {
        return stub_->UpdateCertificate(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::ActivateCertificateAuthority(
    google::cloud::security::privateca::v1::
        ActivateCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 ActivateCertificateAuthorityRequest const& request) {
        return stub->AsyncActivateCertificateAuthority(cq, std::move(context),
                                                       request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->ActivateCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::CreateCertificateAuthority(
    google::cloud::security::privateca::v1::
        CreateCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 CreateCertificateAuthorityRequest const& request) {
        return stub->AsyncCreateCertificateAuthority(cq, std::move(context),
                                                     request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::DisableCertificateAuthority(
    google::cloud::security::privateca::v1::
        DisableCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 DisableCertificateAuthorityRequest const& request) {
        return stub->AsyncDisableCertificateAuthority(cq, std::move(context),
                                                      request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DisableCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::EnableCertificateAuthority(
    google::cloud::security::privateca::v1::
        EnableCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 EnableCertificateAuthorityRequest const& request) {
        return stub->AsyncEnableCertificateAuthority(cq, std::move(context),
                                                     request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->EnableCertificateAuthority(request),
      polling_policy(), __func__);
}

StatusOr<google::cloud::security::privateca::v1::
             FetchCertificateAuthorityCsrResponse>
CertificateAuthorityServiceConnectionImpl::FetchCertificateAuthorityCsr(
    google::cloud::security::privateca::v1::
        FetchCertificateAuthorityCsrRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->FetchCertificateAuthorityCsr(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 FetchCertificateAuthorityCsrRequest const& request) {
        return stub_->FetchCertificateAuthorityCsr(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceConnectionImpl::GetCertificateAuthority(
    google::cloud::security::privateca::v1::
        GetCertificateAuthorityRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCertificateAuthority(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 GetCertificateAuthorityRequest const& request) {
        return stub_->GetCertificateAuthority(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::security::privateca::v1::CertificateAuthority>
CertificateAuthorityServiceConnectionImpl::ListCertificateAuthorities(
    google::cloud::security::privateca::v1::ListCertificateAuthoritiesRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      privateca_v1::CertificateAuthorityServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCertificateAuthorities(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::security::privateca::v1::CertificateAuthority>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::security::privateca::v1::
                          ListCertificateAuthoritiesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::security::privateca::v1::
                       ListCertificateAuthoritiesRequest const& request) {
              return stub->ListCertificateAuthorities(context, request);
            },
            r, function_name);
      },
      [](google::cloud::security::privateca::v1::
             ListCertificateAuthoritiesResponse r) {
        std::vector<
            google::cloud::security::privateca::v1::CertificateAuthority>
            result(r.certificate_authorities().size());
        auto& messages = *r.mutable_certificate_authorities();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::UndeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        UndeleteCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 UndeleteCertificateAuthorityRequest const& request) {
        return stub->AsyncUndeleteCertificateAuthority(cq, std::move(context),
                                                       request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::DeleteCertificateAuthority(
    google::cloud::security::privateca::v1::
        DeleteCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 DeleteCertificateAuthorityRequest const& request) {
        return stub->AsyncDeleteCertificateAuthority(cq, std::move(context),
                                                     request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateAuthority>>
CertificateAuthorityServiceConnectionImpl::UpdateCertificateAuthority(
    google::cloud::security::privateca::v1::
        UpdateCertificateAuthorityRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateAuthority>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateAuthorityRequest const& request) {
        return stub->AsyncUpdateCertificateAuthority(cq, std::move(context),
                                                     request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateAuthority>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCertificateAuthority(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceConnectionImpl::CreateCaPool(
    google::cloud::security::privateca::v1::CreateCaPoolRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CaPool>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::CreateCaPoolRequest const&
                 request) {
        return stub->AsyncCreateCaPool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CaPool>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCaPool(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CaPool>>
CertificateAuthorityServiceConnectionImpl::UpdateCaPool(
    google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CaPool>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::UpdateCaPoolRequest const&
                 request) {
        return stub->AsyncUpdateCaPool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CaPool>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCaPool(request), polling_policy(), __func__);
}

StatusOr<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceConnectionImpl::GetCaPool(
    google::cloud::security::privateca::v1::GetCaPoolRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCaPool(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::GetCaPoolRequest const&
                 request) { return stub_->GetCaPool(context, request); },
      request, __func__);
}

StreamRange<google::cloud::security::privateca::v1::CaPool>
CertificateAuthorityServiceConnectionImpl::ListCaPools(
    google::cloud::security::privateca::v1::ListCaPoolsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      privateca_v1::CertificateAuthorityServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCaPools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::security::privateca::v1::CaPool>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::security::privateca::v1::ListCaPoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::security::privateca::v1::
                       ListCaPoolsRequest const& request) {
              return stub->ListCaPools(context, request);
            },
            r, function_name);
      },
      [](google::cloud::security::privateca::v1::ListCaPoolsResponse r) {
        std::vector<google::cloud::security::privateca::v1::CaPool> result(
            r.ca_pools().size());
        auto& messages = *r.mutable_ca_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceConnectionImpl::DeleteCaPool(
    google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
        request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::DeleteCaPoolRequest const&
                 request) {
        return stub->AsyncDeleteCaPool(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::security::privateca::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteCaPool(request), polling_policy(), __func__);
}

StatusOr<google::cloud::security::privateca::v1::FetchCaCertsResponse>
CertificateAuthorityServiceConnectionImpl::FetchCaCerts(
    google::cloud::security::privateca::v1::FetchCaCertsRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->FetchCaCerts(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::FetchCaCertsRequest const&
                 request) { return stub_->FetchCaCerts(context, request); },
      request, __func__);
}

StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceConnectionImpl::GetCertificateRevocationList(
    google::cloud::security::privateca::v1::
        GetCertificateRevocationListRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCertificateRevocationList(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 GetCertificateRevocationListRequest const& request) {
        return stub_->GetCertificateRevocationList(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::security::privateca::v1::CertificateRevocationList>
CertificateAuthorityServiceConnectionImpl::ListCertificateRevocationLists(
    google::cloud::security::privateca::v1::
        ListCertificateRevocationListsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      privateca_v1::CertificateAuthorityServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency =
      idempotency_policy()->ListCertificateRevocationLists(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<
      google::cloud::security::privateca::v1::CertificateRevocationList>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::security::privateca::v1::
                          ListCertificateRevocationListsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::security::privateca::v1::
                       ListCertificateRevocationListsRequest const& request) {
              return stub->ListCertificateRevocationLists(context, request);
            },
            r, function_name);
      },
      [](google::cloud::security::privateca::v1::
             ListCertificateRevocationListsResponse r) {
        std::vector<
            google::cloud::security::privateca::v1::CertificateRevocationList>
            result(r.certificate_revocation_lists().size());
        auto& messages = *r.mutable_certificate_revocation_lists();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<
    StatusOr<google::cloud::security::privateca::v1::CertificateRevocationList>>
CertificateAuthorityServiceConnectionImpl::UpdateCertificateRevocationList(
    google::cloud::security::privateca::v1::
        UpdateCertificateRevocationListRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateRevocationList>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateRevocationListRequest const& request) {
        return stub->AsyncUpdateCertificateRevocationList(
            cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateRevocationList>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCertificateRevocationList(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceConnectionImpl::CreateCertificateTemplate(
    google::cloud::security::privateca::v1::
        CreateCertificateTemplateRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateTemplate>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 CreateCertificateTemplateRequest const& request) {
        return stub->AsyncCreateCertificateTemplate(cq, std::move(context),
                                                    request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateTemplate>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCertificateTemplate(request),
      polling_policy(), __func__);
}

future<StatusOr<google::cloud::security::privateca::v1::OperationMetadata>>
CertificateAuthorityServiceConnectionImpl::DeleteCertificateTemplate(
    google::cloud::security::privateca::v1::
        DeleteCertificateTemplateRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 DeleteCertificateTemplateRequest const& request) {
        return stub->AsyncDeleteCertificateTemplate(cq, std::move(context),
                                                    request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::security::privateca::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteCertificateTemplate(request),
      polling_policy(), __func__);
}

StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceConnectionImpl::GetCertificateTemplate(
    google::cloud::security::privateca::v1::GetCertificateTemplateRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCertificateTemplate(request),
      [this](grpc::ClientContext& context,
             google::cloud::security::privateca::v1::
                 GetCertificateTemplateRequest const& request) {
        return stub_->GetCertificateTemplate(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>
CertificateAuthorityServiceConnectionImpl::ListCertificateTemplates(
    google::cloud::security::privateca::v1::ListCertificateTemplatesRequest
        request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<
      privateca_v1::CertificateAuthorityServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCertificateTemplates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::security::privateca::v1::CertificateTemplate>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::security::privateca::v1::
                          ListCertificateTemplatesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::security::privateca::v1::
                       ListCertificateTemplatesRequest const& request) {
              return stub->ListCertificateTemplates(context, request);
            },
            r, function_name);
      },
      [](google::cloud::security::privateca::v1::
             ListCertificateTemplatesResponse r) {
        std::vector<google::cloud::security::privateca::v1::CertificateTemplate>
            result(r.certificate_templates().size());
        auto& messages = *r.mutable_certificate_templates();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::security::privateca::v1::CertificateTemplate>>
CertificateAuthorityServiceConnectionImpl::UpdateCertificateTemplate(
    google::cloud::security::privateca::v1::
        UpdateCertificateTemplateRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::security::privateca::v1::CertificateTemplate>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::security::privateca::v1::
                 UpdateCertificateTemplateRequest const& request) {
        return stub->AsyncUpdateCertificateTemplate(cq, std::move(context),
                                                    request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::security::privateca::v1::CertificateTemplate>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCertificateTemplate(request),
      polling_policy(), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_v1_internal
}  // namespace cloud
}  // namespace google
