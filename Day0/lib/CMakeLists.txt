# Copyright © 2021  Neeraj Singhal
# All rights reserved

project(lib)

# Add an executable with the above sources
add_executable (${PROJECT_NAME}  lib.h lib.cpp)

#target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)