cmake_minimum_required(VERSION 3.20)
project(PrjektKońcowy)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProjektKoncowy src/miasta.cpp include/miasta.h src/main.cpp dane.csv)