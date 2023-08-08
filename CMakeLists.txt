cmake_minimum_required(VERSION 3.12)

project(third_party_libs)

find_package(Boost 1.72.0 REQUIRED COMPONENTS filesystem)

message(${Boost_INCLUDE_DIRS} " " ${Boost_FILESYSTEM_LIBRARY})

add_executable(main main.cpp)
target_link_libraries(main PRIVATE Boost::filesystem)
