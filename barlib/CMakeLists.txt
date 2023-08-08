project(barlib)

add_library(bar src/bar.cpp)
target_include_directories(bar PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)
add_library(bar::bar ALIAS bar)