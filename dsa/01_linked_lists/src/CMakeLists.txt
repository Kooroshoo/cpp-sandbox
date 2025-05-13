# Create a library from my_lib
add_library(my_lib
    my_lib/my_lib.cpp
)

target_include_directories(my_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/my_lib
)

# Create main executable
add_executable(my_app main.cpp)

# Link the library to the executable
target_link_libraries(my_app PRIVATE my_lib)
