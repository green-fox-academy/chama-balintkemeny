cmake_minimum_required(VERSION 3.14)
project(ex01_ModelStringedInstruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex01_ModelStringedInstruments main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h)