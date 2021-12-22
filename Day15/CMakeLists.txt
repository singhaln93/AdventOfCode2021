# Copyright © 2021  Neeraj Singhal
# All rights reserved

cmake_minimum_required(VERSION 3.21)
project(AoC)

# Set cmake Cxx standard to 11/14/17/20
#set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_KNOWN_FEATURES "-std=c++2a -O3 -pthread -lboost_system")

# Generate the static library from the library sources
add_library(library STATIC 
    lib/lib.cpp
    lib/libchrono.cpp
)

target_include_directories(library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/lib
)


# Add an executable with the above sources
add_executable(${PROJECT_NAME}  
src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( ${PROJECT_NAME} 
    PRIVATE 
        library
)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)