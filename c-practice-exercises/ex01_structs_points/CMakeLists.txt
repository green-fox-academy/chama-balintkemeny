cmake_minimum_required(VERSION 3.15)
project(ex01_structs_points C)

set(CMAKE_C_STANDARD 99)

add_executable(ex01_structs_points main.c)
target_link_libraries(ex01_structs_points m)