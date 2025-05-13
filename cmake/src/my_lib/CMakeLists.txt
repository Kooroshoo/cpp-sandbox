add_library(my_lib
    my_lib.cpp
)

target_include_directories(my_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}  # So others can include "my_lib.h"
)
