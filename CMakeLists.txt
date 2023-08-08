cmake_minimum_required(VERSION 3.12)

project(code_generation)

find_package(Protobuf REQUIRED)

if(Protobuf_FOUND)
  message("found pb")
else()
  message(FATAL_ERROR "pb not found")
endif()

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS AddressBook.proto)

set(app_version "v0.0.1")

configure_file(ver.h.in ${CMAKE_BINARY_DIR}/ver.h)

add_executable(main main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_include_directories(main PRIVATE ${CMAKE_BINARY_DIR} ${Protobuf_INCLUDE_DIRS})
target_link_libraries(main PRIVATE ${Protobuf_LIBRARY})