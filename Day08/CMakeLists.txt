cmake_minimum_required(VERSION 3.21)

# Set a default C++ compile flag
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DTEST" CACHE STRING "Set C++ Compiler Flags" FORCE)

project(AoC)

# try conditional compilation
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++2b" Compiler_Supports_CXX2B)
# CHECK_CXX_COMPILER_FLAG("-std=c++11" Compiler_Supports_CXX11)

# set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# check results and add flag
if(Compiler_Supports_CXX2B)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2b")
elseif(Compiler_Supports_CXX2A)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")
elseif(Compiler_Supports_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()



# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    main.cpp
)

# Add an executable with the above sources
add_executable(AoC  ${SOURCES} lib.hpp)

#target_include_directories(AoC PRIVATE lib.h)
target_compile_definitions(AoC 
    PRIVATE TEST
)