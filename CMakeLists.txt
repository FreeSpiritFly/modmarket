cmake_minimum_required(VERSION 3.5)
project(ModMarket)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/libs")
set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules
   )


include_directories(libmodutil)
include_directories(libmodhttprpc)
LINK_DIRECTORIES( ./libs)


add_subdirectory(libmodutil)
add_subdirectory(libmodhttprpc)
add_subdirectory(libmodp2p)
#add_subdirectory(libmodcrypto)
add_subdirectory(httprpc)
