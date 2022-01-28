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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_CONTAINER_ANALYSIS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_CONTAINER_ANALYSIS_CLIENT_H

#include "google/cloud/containeranalysis/container_analysis_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/iam_updater.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Retrieves analysis results of Cloud components such as Docker container
/// images. The Container Analysis API is an implementation of the
/// [Grafeas](https://grafeas.io) API.
///
/// Analysis results are stored as a series of occurrences. An `Occurrence`
/// contains information about a specific analysis instance on a resource. An
/// occurrence refers to a `Note`. A note contains details describing the
/// analysis and is generally stored in a separate project, called a `Provider`.
/// Multiple occurrences can refer to the same note.
///
/// For example, an SSL vulnerability could affect multiple images. In this
/// case, there would be one note for the vulnerability and an occurrence for
/// each image with the vulnerability referring to that note.
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
class ContainerAnalysisClient {
 public:
  explicit ContainerAnalysisClient(
      std::shared_ptr<ContainerAnalysisConnection> connection,
      Options options = {});
  ~ContainerAnalysisClient();

  //@{
  // @name Copy and move support
  ContainerAnalysisClient(ContainerAnalysisClient const&) = default;
  ContainerAnalysisClient& operator=(ContainerAnalysisClient const&) = default;
  ContainerAnalysisClient(ContainerAnalysisClient&&) = default;
  ContainerAnalysisClient& operator=(ContainerAnalysisClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(ContainerAnalysisClient const& a,
                         ContainerAnalysisClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ContainerAnalysisClient const& a,
                         ContainerAnalysisClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Sets the access control policy on the specified note or occurrence.
  /// Requires `containeranalysis.notes.setIamPolicy` or
  /// `containeranalysis.occurrences.setIamPolicy` permission if the resource is
  /// a note or an occurrence, respectively.
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param policy  REQUIRED: The complete policy to be applied to the
  /// `resource`. The size of
  ///  the policy is limited to a few 10s of KB. An empty policy is a
  ///  valid policy but certain Cloud Platform services (such as Projects)
  ///  might reject them.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L88}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L98}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L88}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy,
      Options options = {});

  /**
   * Updates the IAM policy for @p resource using an optimistic concurrency
   * control loop.
   *
   * The loop fetches the current policy for @p resource, and passes it to @p
   * updater, which should return the new policy. This new policy should use the
   * current etag so that the read-modify-write cycle can detect races and rerun
   * the update when there is a mismatch. If the new policy does not have an
   * etag, the existing policy will be blindly overwritten. If @p updater does
   * not yield a policy, the control loop is terminated and kCancelled is
   * returned.
   *
   * @param resource  Required. The resource for which the policy is being
   * specified. See the operation documentation for the appropriate value for
   * this field.
   * @param updater  Required. Functor to map the current policy to a new one.
   * @param options  Optional. Options to control the loop. Expected options
   * are:
   *       - `ContainerAnalysisBackoffPolicyOption`
   * @return google::iam::v1::Policy
   */
  StatusOr<google::iam::v1::Policy> SetIamPolicy(std::string const& resource,
                                                 IamUpdater const& updater,
                                                 Options options = {});

  ///
  /// Sets the access control policy on the specified note or occurrence.
  /// Requires `containeranalysis.notes.setIamPolicy` or
  /// `containeranalysis.occurrences.setIamPolicy` permission if the resource is
  /// a note or an occurrence, respectively.
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L98}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L88}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L98}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L88}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request,
      Options options = {});

  ///
  /// Gets the access control policy for a note or an occurrence resource.
  /// Requires `containeranalysis.notes.setIamPolicy` or
  /// `containeranalysis.occurrences.setIamPolicy` permission if the resource is
  /// a note or occurrence, respectively.
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L88}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L113}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L88}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(std::string const& resource,
                                                 Options options = {});

  ///
  /// Gets the access control policy for a note or an occurrence resource.
  /// Requires `containeranalysis.notes.setIamPolicy` or
  /// `containeranalysis.occurrences.setIamPolicy` permission if the resource is
  /// a note or occurrence, respectively.
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L113}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L88}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L113}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L88}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request,
      Options options = {});

  ///
  /// Returns the permissions that a caller has on the specified note or
  /// occurrence. Requires list permission on the project (for example,
  /// `containeranalysis.notes.list`).
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is
  /// being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`.
  /// Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L141}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L126}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L141}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options options = {});

  ///
  /// Returns the permissions that a caller has on the specified note or
  /// occurrence. Requires list permission on the project (for example,
  /// `containeranalysis.notes.list`).
  ///
  /// The resource takes the format `projects/[PROJECT_ID]/notes/[NOTE_ID]` for
  /// notes and `projects/[PROJECT_ID]/occurrences/[OCCURRENCE_ID]` for
  /// occurrences.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L126}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L141}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L126}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L141}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options options = {});

  ///
  /// Gets a summary of the number and severity of occurrences.
  ///
  /// @param parent  Required. The name of the project to get a vulnerability
  /// summary for in the form of
  ///  `projects/[PROJECT_ID]`.
  /// @param filter  The filter expression.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary,google/devtools/containeranalysis/v1/containeranalysis.proto#L140}
  ///
  /// [google.devtools.containeranalysis.v1.GetVulnerabilityOccurrencesSummaryRequest]:
  /// @googleapis_reference_link{google/devtools/containeranalysis/v1/containeranalysis.proto#L124}
  /// [google.devtools.containeranalysis.v1.VulnerabilityOccurrencesSummary]:
  /// @googleapis_reference_link{google/devtools/containeranalysis/v1/containeranalysis.proto#L140}
  ///
  StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(std::string const& parent,
                                     std::string const& filter,
                                     Options options = {});

  ///
  /// Gets a summary of the number and severity of occurrences.
  ///
  /// @param request
  /// @googleapis_link{google::devtools::containeranalysis::v1::GetVulnerabilityOccurrencesSummaryRequest,google/devtools/containeranalysis/v1/containeranalysis.proto#L124}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary,google/devtools/containeranalysis/v1/containeranalysis.proto#L140}
  ///
  /// [google.devtools.containeranalysis.v1.GetVulnerabilityOccurrencesSummaryRequest]:
  /// @googleapis_reference_link{google/devtools/containeranalysis/v1/containeranalysis.proto#L124}
  /// [google.devtools.containeranalysis.v1.VulnerabilityOccurrencesSummary]:
  /// @googleapis_reference_link{google/devtools/containeranalysis/v1/containeranalysis.proto#L140}
  ///
  StatusOr<
      google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
  GetVulnerabilityOccurrencesSummary(
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<ContainerAnalysisConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTAINERANALYSIS_CONTAINER_ANALYSIS_CLIENT_H
