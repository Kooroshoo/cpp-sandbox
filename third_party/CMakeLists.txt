cmake_minimum_required(VERSION 3.14)
project(my_project)

# Required for FetchContent
include(FetchContent)

# Declare and download fmtlib
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        10.1.1  # Use a known good version
)

# Make fmt available
FetchContent_MakeAvailable(fmt)

# Your project target
add_executable(my_app src/main.cpp)

# Link fmt
target_link_libraries(my_app PRIVATE fmt::fmt)

# Optional: enable warnings or C++ standards
target_compile_features(my_app PRIVATE cxx_std_17)
