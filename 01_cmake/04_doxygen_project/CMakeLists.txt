cmake_minimum_required(VERSION 3.10)
project(DoxygenExample)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(math_utils src/math_utils.cpp)
add_executable(main main.cpp)
target_link_libraries(main math_utils)
