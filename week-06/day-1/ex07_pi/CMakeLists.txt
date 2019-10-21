cmake_minimum_required(VERSION 3.15)
project(ex07_pi C)

set(CMAKE_C_STANDARD 99)

add_executable(ex07_pi main.c circle.h circle.c)