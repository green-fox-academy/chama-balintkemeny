cmake_minimum_required(VERSION 3.14)
project(ex02_TheGardenApplication)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex02_TheGardenApplication main.cpp Plant.cpp Plant.h Flower.cpp Flower.h Tree.cpp Tree.h Garden.cpp Garden.h)