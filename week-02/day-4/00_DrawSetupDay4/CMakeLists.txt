cmake_minimum_required(VERSION 3.14)
project(00_DrawSetup)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH D:/SDL2)

set(EXECUTABLES "draw_ex17_superHexagon;draw_ex18_triangle;draw_ex19_linePlay;draw_ex20_envelopeStar;draw_ex21_linePlayQuarters")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
