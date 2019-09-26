cmake_minimum_required(VERSION 3.14)
project(ex12_Farm)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex12_Farm main.cpp Animal.cpp Animal.h Farm.cpp Farm.h)