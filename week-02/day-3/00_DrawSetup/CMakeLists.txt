cmake_minimum_required(VERSION 3.14)
project(00_DrawSetup)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH D:/SDL2)

set(EXECUTABLES "draw;draw_ex02;draw_ex03;draw_ex04;draw_ex05;draw_ex06;draw_ex07;draw_ex08;draw_ex09;draw_ex10;draw_ex11;draw_ex12")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
