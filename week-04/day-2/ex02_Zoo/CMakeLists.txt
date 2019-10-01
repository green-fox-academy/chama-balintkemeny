cmake_minimum_required(VERSION 3.14)
project(ex02_Zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex02_Zoo main.cpp Animal.cpp Animal.h EggLayer.cpp EggLayer.h Bird.cpp Bird.h Reptile.cpp Reptile.h Mammal.cpp Mammal.h)