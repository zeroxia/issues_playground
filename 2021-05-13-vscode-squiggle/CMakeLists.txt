cmake_minimum_required(VERSION 3.15)

project(CMake-Playground VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

add_library(play STATIC play.cpp play.h)
add_executable(output output.cpp)
target_link_libraries(output PRIVATE play)

# https://github.com/microsoft/vscode-cpptools/issues/4350
