project(foolib)

add_library(foo INTERFACE)
target_include_directories(foo INTERFACE ${PROJECT_SOURCE_DIR}/include)
add_library(foo::foo ALIAS foo)