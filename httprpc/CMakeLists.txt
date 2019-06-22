cmake_minimum_required(VERSION 2.8)

project(modhttprpc)

add_executable(modrpcd main.cpp)

target_link_libraries(modrpcd  modutil  modhttprpc)

