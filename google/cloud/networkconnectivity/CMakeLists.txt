# ~~~
# Copyright 2022 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

include(GoogleapisConfig)
set(DOXYGEN_PROJECT_NAME "Network Connectivity API C++ Client")
set(DOXYGEN_PROJECT_BRIEF
    "A C++ Client Library for the Network Connectivity API")
set(DOXYGEN_PROJECT_NUMBER "${PROJECT_VERSION}")
set(DOXYGEN_EXCLUDE_SYMBOLS "internal")
set(DOXYGEN_EXAMPLE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/quickstart")

unset(mocks_globs)
unset(source_globs)
set(service_dirs "" "v1/")
foreach (dir IN LISTS service_dirs)
    string(REPLACE "/" "_" ns "${dir}")
    list(APPEND source_globs "${dir}*.h" "${dir}*.cc" "${dir}internal/*")
    list(APPEND mocks_globs "${dir}mocks/*.h")
    list(APPEND DOXYGEN_EXCLUDE_SYMBOLS "networkconnectivity_${ns}internal")
    if (NOT dir STREQUAL "")
        list(APPEND DOXYGEN_EXAMPLE_PATH
             "${CMAKE_CURRENT_SOURCE_DIR}/${dir}samples")
    endif ()
endforeach ()

include(GoogleCloudCppDoxygen)
google_cloud_cpp_doxygen_targets("networkconnectivity" DEPENDS cloud-docs
                                 google-cloud-cpp::networkconnectivity_protos)

include(GoogleCloudCppCommon)

include(CompileProtos)
google_cloud_cpp_find_proto_include_dir(PROTO_INCLUDE_DIR)
google_cloud_cpp_load_protolist(
    proto_list
    "${PROJECT_SOURCE_DIR}/external/googleapis/protolists/networkconnectivity.list"
)
google_cloud_cpp_load_protodeps(
    proto_deps
    "${PROJECT_SOURCE_DIR}/external/googleapis/protodeps/networkconnectivity.deps"
)
google_cloud_cpp_grpcpp_library(
    google_cloud_cpp_networkconnectivity_protos # cmake-format: sort
    ${proto_list} PROTO_PATH_DIRECTORIES "${EXTERNAL_GOOGLEAPIS_SOURCE}"
    "${PROTO_INCLUDE_DIR}")
external_googleapis_set_version_and_alias(networkconnectivity_protos)
target_link_libraries(google_cloud_cpp_networkconnectivity_protos
                      PUBLIC ${proto_deps})

file(
    GLOB source_files
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    ${source_globs})
list(SORT source_files)
add_library(google_cloud_cpp_networkconnectivity ${source_files})
target_include_directories(
    google_cloud_cpp_networkconnectivity
    PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
           $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
           $<INSTALL_INTERFACE:include>)
target_link_libraries(
    google_cloud_cpp_networkconnectivity
    PUBLIC google-cloud-cpp::grpc_utils google-cloud-cpp::common
           google-cloud-cpp::networkconnectivity_protos)
google_cloud_cpp_add_common_options(google_cloud_cpp_networkconnectivity)
set_target_properties(
    google_cloud_cpp_networkconnectivity
    PROPERTIES EXPORT_NAME google-cloud-cpp::networkconnectivity
               VERSION "${PROJECT_VERSION}"
               SOVERSION "${PROJECT_VERSION_MAJOR}")
target_compile_options(google_cloud_cpp_networkconnectivity
                       PUBLIC ${GOOGLE_CLOUD_CPP_EXCEPTIONS_FLAG})

add_library(google-cloud-cpp::networkconnectivity ALIAS
            google_cloud_cpp_networkconnectivity)

# Create a header-only library for the mocks. We use a CMake `INTERFACE` library
# for these, a regular library would not work on macOS (where the library needs
# at least one .o file). Unfortunately INTERFACE libraries are a bit weird in
# that they need absolute paths for their sources.
file(
    GLOB relative_mock_files
    RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    ${mocks_globs})
list(SORT relative_mock_files)
set(mock_files)
foreach (file IN LISTS relative_mock_files)
    list(APPEND mock_files "${CMAKE_CURRENT_SOURCE_DIR}/${file}")
endforeach ()
add_library(google_cloud_cpp_networkconnectivity_mocks INTERFACE)
target_sources(google_cloud_cpp_networkconnectivity_mocks
               INTERFACE ${mock_files})
target_link_libraries(
    google_cloud_cpp_networkconnectivity_mocks
    INTERFACE google-cloud-cpp::networkconnectivity GTest::gmock_main
              GTest::gmock GTest::gtest)
set_target_properties(
    google_cloud_cpp_networkconnectivity_mocks
    PROPERTIES EXPORT_NAME google-cloud-cpp::networkconnectivity_mocks)
target_include_directories(
    google_cloud_cpp_networkconnectivity_mocks
    INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
              $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
              $<INSTALL_INTERFACE:include>)
target_compile_options(google_cloud_cpp_networkconnectivity_mocks
                       INTERFACE ${GOOGLE_CLOUD_CPP_EXCEPTIONS_FLAG})

include(CTest)
if (BUILD_TESTING)
    add_executable(networkconnectivity_quickstart "quickstart/quickstart.cc")
    target_link_libraries(networkconnectivity_quickstart
                          PRIVATE google-cloud-cpp::networkconnectivity)
    google_cloud_cpp_add_common_options(networkconnectivity_quickstart)
    add_test(
        NAME networkconnectivity_quickstart
        COMMAND
            cmake -P "${PROJECT_SOURCE_DIR}/cmake/quickstart-runner.cmake"
            $<TARGET_FILE:networkconnectivity_quickstart> GOOGLE_CLOUD_PROJECT)
    set_tests_properties(networkconnectivity_quickstart
                         PROPERTIES LABELS "integration-test;quickstart")
endif ()

# Get the destination directories based on the GNU recommendations.
include(GNUInstallDirs)

# Export the CMake targets to make it easy to create configuration files.
install(
    EXPORT google_cloud_cpp_networkconnectivity-targets
    DESTINATION
        "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_networkconnectivity"
    COMPONENT google_cloud_cpp_development)

# Install the libraries and headers in the locations determined by
# GNUInstallDirs
install(
    TARGETS google_cloud_cpp_networkconnectivity
            google_cloud_cpp_networkconnectivity_protos
    EXPORT google_cloud_cpp_networkconnectivity-targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
            COMPONENT google_cloud_cpp_runtime
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_runtime
            NAMELINK_SKIP
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development)
# With CMake-3.12 and higher we could avoid this separate command (and the
# duplication).
install(
    TARGETS google_cloud_cpp_networkconnectivity
            google_cloud_cpp_networkconnectivity_protos
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development
            NAMELINK_ONLY
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development)

google_cloud_cpp_install_proto_library_protos(
    "google_cloud_cpp_networkconnectivity_protos"
    "${EXTERNAL_GOOGLEAPIS_SOURCE}")
google_cloud_cpp_install_proto_library_headers(
    "google_cloud_cpp_networkconnectivity_protos")
google_cloud_cpp_install_headers("google_cloud_cpp_networkconnectivity"
                                 "include/google/cloud/networkconnectivity")
google_cloud_cpp_install_headers("google_cloud_cpp_networkconnectivity_mocks"
                                 "include/google/cloud/networkconnectivity")

google_cloud_cpp_add_pkgconfig(
    networkconnectivity
    "The Network Connectivity API C++ Client Library"
    "Provides C++ APIs to use the Network Connectivity API."
    "google_cloud_cpp_grpc_utils"
    " google_cloud_cpp_common"
    " google_cloud_cpp_networkconnectivity_protos")

# Create and install the CMake configuration files.
include(CMakePackageConfigHelpers)
configure_file("config.cmake.in"
               "google_cloud_cpp_networkconnectivity-config.cmake" @ONLY)
write_basic_package_version_file(
    "google_cloud_cpp_networkconnectivity-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY ExactVersion)

install(
    FILES
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_networkconnectivity-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_networkconnectivity-config-version.cmake"
    DESTINATION
        "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_networkconnectivity"
    COMPONENT google_cloud_cpp_development)

external_googleapis_install_pc("google_cloud_cpp_networkconnectivity_protos")

# google-cloud-cpp::networkconnectivity must be defined before we can add the
# samples.
foreach (dir IN LISTS service_dirs)
    if (BUILD_TESTING AND GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS)
        google_cloud_cpp_add_samples_relative("networkconnectivity"
                                              "${dir}samples/")
    endif ()
endforeach ()
