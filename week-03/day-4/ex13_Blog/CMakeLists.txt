cmake_minimum_required(VERSION 3.14)
project(ex13_Blog)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex13_Blog main.cpp BlogPost.cpp BlogPost.h Blog.cpp Blog.h)