cmake_minimum_required(VERSION 3.15)
project(ex04_point C)

set(CMAKE_C_STANDARD 99)

add_executable(ex04_point main.c)

target_link_libraries(ex04_point m)