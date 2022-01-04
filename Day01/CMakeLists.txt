# Copyright © 2021  Neeraj Singhal
# All rights reserved

cmake_minimum_required(VERSION 3.22)
project(AoC)

# Set cmake Cxx standard to 11/14/17/20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Git REQUIRED)

# For application
add_definitions(-DDEBUG=1)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_library(library STATIC lib/lib.cpp)
target_include_directories(library PUBLIC ${PROJECT_SOURCE_DIR}/lib)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} src/main.cpp)

# link the new hello_library target with the hello_binary target
target_link_libraries( ${PROJECT_NAME} PRIVATE library)
