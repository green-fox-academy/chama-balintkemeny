cmake_minimum_required(VERSION 3.14)
project(ex07_FleetOfThings)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex07_FleetOfThings main.cpp fleet.cpp fleet.h thing.cpp thing.h)