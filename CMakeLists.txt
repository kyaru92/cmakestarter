cmake_minimum_required(VERSION 3.12)

project(cmake_headers)

# set(SOURCES
#   src/hello.cpp
#   src/main.cpp
# )
file(GLOB SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)