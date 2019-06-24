cmake_minimum_required(VERSION 3.5)

project(modhttprpc)

include_directories(../libmodutil)
include_directories(../libmodhttprpc)

add_executable(modrpcd main.cpp)

target_link_libraries(modrpcd  modutil  modhttprpc)

