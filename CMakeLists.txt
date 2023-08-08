cmake_minimum_required(VERSION 3.12)

project(compiler_flags)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DGLOBALDEF" CACHE STRING "Set Compiler Flags" FORCE)
# Setting C compiler flags using CMAKE_C_FLAGS
# Setting linker flags using CMAKE_LINKER_FLAGS.


add_executable(main main.cpp)
target_compile_definitions(main PRIVATE
  CUSTOMDEF
)