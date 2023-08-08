cmake_minimum_required(VERSION 3.12)

project(static_library)

add_library(hello STATIC 
  src/hello.cpp
)
target_include_directories(hello PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE hello)