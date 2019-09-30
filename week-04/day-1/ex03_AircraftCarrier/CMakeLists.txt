cmake_minimum_required(VERSION 3.14)
project(ex03_AircraftCarrier)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex03_AircraftCarrier main.cpp Aircraft.cpp Aircraft.h Carrier.cpp Carrier.h F16.cpp F16.h F35.cpp F35.h)