cmake_minimum_required(VERSION 3.14)
project(DoxygenExample)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

# Create the math_utils library
add_library(math_utils src/math_utils.cpp)

# Use FetchContent to download Catch2
include(FetchContent)
FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.9  # Adjust the version as needed
)
FetchContent_MakeAvailable(catch2)

# Enable testing
enable_testing()

# Create unit_tests executable (this is the only target we need)
add_executable(unit_tests tests/test_math_utils.cpp)

# Link the unit tests executable with Catch2 and math_utils
target_link_libraries(unit_tests Catch2::Catch2 math_utils)

# This enables Catch2's command to automatically register tests
include_directories(${catch2_SOURCE_DIR}/single_include)

# Add the test to CTest (the test executable)
add_test(NAME unit_tests COMMAND unit_tests)
