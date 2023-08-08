cmake_minimum_required(VERSION 3.12)

project(hello_cmake)

message("binary dir " ${CMAKE_BINARY_DIR})

add_executable(${PROJECT_NAME} main.cpp)