cmake_minimum_required(VERSION 3.15)
project(ex01_Devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex01_Devices main.cpp Printer.cpp Printer.h Printer2D.cpp Printer2D.h Printer3D.cpp Printer3D.h Scanner.cpp Scanner.h Copier.cpp Copier.h)