cmake_minimum_required(VERSION 3.15)
project(ASCII_art C)

set(CMAKE_C_STANDARD 99)

add_executable(ASCII_art main.c asciigen.c asciigen.h)