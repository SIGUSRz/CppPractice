cmake_minimum_required(VERSION 3.15)
project(CppPractice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -v")

add_subdirectory(src)
add_subdirectory(test)