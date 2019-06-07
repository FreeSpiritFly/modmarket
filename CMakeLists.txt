cmake_minimum_required(VERSION 3.5)
project(SDKAuth)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/libs")

include_directories(libmodutil)
include_directories(libmodhttprpc)
LINK_DIRECTORIES( ./libs)


add_subdirectory(libmodutil)
add_subdirectory(libmodhttprpc)
add_subdirectory(httprpc)
