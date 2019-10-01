cmake_minimum_required(VERSION 3.14)
project(ex03_Flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex03_Flyable main.cpp Flyable.cpp Flyable.h Vehicle.cpp Vehicle.h Helicopter.cpp Helicopter.h Animal.cpp Animal.h EggLayer.cpp EggLayer.h Bird.cpp Bird.h)