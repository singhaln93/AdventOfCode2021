# Copyright © 2021  Neeraj Singhal
# All rights reserved

project(src)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} main.cpp)

#target_link_libraries (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)