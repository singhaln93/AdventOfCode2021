# Copyright © 2021  Neeraj Singhal
# All rights reserved

cmake_minimum_required(VERSION 3.21)
project(AoC)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_subdirectory(lib)

#add_executable(AoC main.cpp lib.h lib.cpp)

#include(CTest)
#enable_testing()

#add_test(test_all test_lib)