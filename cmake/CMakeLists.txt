cmake_minimum_required(VERSION 3.16)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # for clangd and tools

# Optionally add your custom CMake scripts
# list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Add subdirectories
add_subdirectory(src/my_lib)
add_subdirectory(app)
