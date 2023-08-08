cmake_minimum_required(VERSION 3.12)

project("standard")

# include(CheckCXXCompilerFlag)
# CHECK_CXX_COMPILER_FLAG("-std=c++20" COMPILER_SUPPORTS_CXX20)

# if(COMPILER_SUPPORTS_CXX20)
#   set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
# endif()

set(CMAKE_CXX_STANDARD 20)

message("List of compile features: ${CMAKE_CXX_COMPILE_FEATURES}")

add_executable(main main.cpp)