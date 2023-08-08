project(binary)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE foo::foo bar::bar)