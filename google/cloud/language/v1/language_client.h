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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CLIENT_H

#include "google/cloud/language/v1/language_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Provides text analysis operations such as sentiment analysis and entity
/// recognition.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class LanguageServiceClient {
 public:
  explicit LanguageServiceClient(
      std::shared_ptr<LanguageServiceConnection> connection, Options opts = {});
  ~LanguageServiceClient();

  ///@{
  /// @name Copy and move support
  LanguageServiceClient(LanguageServiceClient const&) = default;
  LanguageServiceClient& operator=(LanguageServiceClient const&) = default;
  LanguageServiceClient(LanguageServiceClient&&) = default;
  LanguageServiceClient& operator=(LanguageServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(LanguageServiceClient const& a,
                         LanguageServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LanguageServiceClient const& a,
                         LanguageServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param document  Required. Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// sentence offsets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L1025}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1016}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1025}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::Document const& document,
                   google::cloud::language::v1::EncodingType encoding_type,
                   Options opts = {});

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param document  Required. Input document.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L1025}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1016}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1025}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(google::cloud::language::v1::Document const& document,
                   Options opts = {});

  ///
  /// Analyzes the sentiment of the provided text.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentRequest,google/cloud/language/v1/language_service.proto#L1016}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSentimentResponse,google/cloud/language/v1/language_service.proto#L1025}
  ///
  /// [google.cloud.language.v1.AnalyzeSentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1016}
  /// [google.cloud.language.v1.AnalyzeSentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1025}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
  AnalyzeSentiment(
      google::cloud::language::v1::AnalyzeSentimentRequest const& request,
      Options opts = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param document  Required. Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1070}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1061}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1070}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::Document const& document,
                  google::cloud::language::v1::EncodingType encoding_type,
                  Options opts = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param document  Required. Input document.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1070}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1061}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1070}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(google::cloud::language::v1::Document const& document,
                  Options opts = {});

  ///
  /// Finds named entities (currently proper names and common nouns) in the text
  /// along with entity types, salience, mentions for each entity, and
  /// other properties.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesRequest,google/cloud/language/v1/language_service.proto#L1061}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitiesResponse,google/cloud/language/v1/language_service.proto#L1070}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitiesRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1061}
  /// [google.cloud.language.v1.AnalyzeEntitiesResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1070}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
  AnalyzeEntities(
      google::cloud::language::v1::AnalyzeEntitiesRequest const& request,
      Options opts = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param document  Required. Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L1049}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1040}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1049}
  /// [google.cloud.language.v1.LanguageService.AnalyzeEntities]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L50}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::EncodingType encoding_type,
      Options opts = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param document  Required. Input document.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L1049}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1040}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1049}
  /// [google.cloud.language.v1.LanguageService.AnalyzeEntities]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L50}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(google::cloud::language::v1::Document const& document,
                         Options opts = {});

  ///
  /// Finds entities, similar to
  /// [AnalyzeEntities][google.cloud.language.v1.LanguageService.AnalyzeEntities]
  /// in the text and analyzes sentiment associated with each entity and its
  /// mentions.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentRequest,google/cloud/language/v1/language_service.proto#L1040}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeEntitySentimentResponse,google/cloud/language/v1/language_service.proto#L1049}
  ///
  /// [google.cloud.language.v1.AnalyzeEntitySentimentRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1040}
  /// [google.cloud.language.v1.AnalyzeEntitySentimentResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1049}
  /// [google.cloud.language.v1.LanguageService.AnalyzeEntities]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L50}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
  AnalyzeEntitySentiment(
      google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request,
      Options opts = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param document  Required. Input document.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1091}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1082}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1091}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::EncodingType encoding_type,
      Options opts = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param document  Required. Input document.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1091}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1082}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1091}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::Document const& document, Options opts = {});

  ///
  /// Analyzes the syntax of the text and provides sentence boundaries and
  /// tokenization along with part of speech tags, dependency trees, and other
  /// properties.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxRequest,google/cloud/language/v1/language_service.proto#L1082}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnalyzeSyntaxResponse,google/cloud/language/v1/language_service.proto#L1091}
  ///
  /// [google.cloud.language.v1.AnalyzeSyntaxRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1082}
  /// [google.cloud.language.v1.AnalyzeSyntaxResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1091}
  ///
  StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse> AnalyzeSyntax(
      google::cloud::language::v1::AnalyzeSyntaxRequest const& request,
      Options opts = {});

  ///
  /// Classifies a document into categories.
  ///
  /// @param document  Required. Input document.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextResponse,google/cloud/language/v1/language_service.proto#L1116}
  ///
  /// [google.cloud.language.v1.ClassifyTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1106}
  /// [google.cloud.language.v1.ClassifyTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1116}
  ///
  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::Document const& document, Options opts = {});

  ///
  /// Classifies a document into categories.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextRequest,google/cloud/language/v1/language_service.proto#L1106}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::ClassifyTextResponse,google/cloud/language/v1/language_service.proto#L1116}
  ///
  /// [google.cloud.language.v1.ClassifyTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1106}
  /// [google.cloud.language.v1.ClassifyTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1116}
  ///
  StatusOr<google::cloud::language::v1::ClassifyTextResponse> ClassifyText(
      google::cloud::language::v1::ClassifyTextRequest const& request,
      Options opts = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param document  Required. Input document.
  /// @param features  Required. The enabled features.
  /// @param encoding_type  The encoding type used by the API to calculate
  /// offsets.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1158}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1123}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1158}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::AnnotateTextRequest::Features const&
          features,
      google::cloud::language::v1::EncodingType encoding_type,
      Options opts = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param document  Required. Input document.
  /// @param features  Required. The enabled features.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1158}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1123}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1158}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::Document const& document,
      google::cloud::language::v1::AnnotateTextRequest::Features const&
          features,
      Options opts = {});

  ///
  /// A convenience method that provides all the features that analyzeSentiment,
  /// analyzeEntities, and analyzeSyntax provide in one call.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextRequest,google/cloud/language/v1/language_service.proto#L1123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::language::v1::AnnotateTextResponse,google/cloud/language/v1/language_service.proto#L1158}
  ///
  /// [google.cloud.language.v1.AnnotateTextRequest]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1123}
  /// [google.cloud.language.v1.AnnotateTextResponse]:
  /// @googleapis_reference_link{google/cloud/language/v1/language_service.proto#L1158}
  ///
  StatusOr<google::cloud::language::v1::AnnotateTextResponse> AnnotateText(
      google::cloud::language::v1::AnnotateTextRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<LanguageServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_LANGUAGE_CLIENT_H
