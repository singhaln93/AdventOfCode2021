# Copyright © 2021  Neeraj Singhal
# All rights reserved

cmake_minimum_required(VERSION 3.21)
project(AoC)

set(CMAKE_CXX_STANDARD 20)

#include(CTest)
#enable_testing()

#add_test(test_all test_lib)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    lib/lib.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(${PROJECT_NAME}
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/lib
)