cmake_minimum_required(VERSION 3.14)
project(LinkedListProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library
add_library(linked_list_lib
    src/lib/linked-list.cpp
)

# Include directory for headers
target_include_directories(linked_list_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/lib
)

# Add executable
add_executable(linked_list_main src/main.cpp)

# Link the library to the executable
target_link_libraries(linked_list_main PRIVATE linked_list_lib)
