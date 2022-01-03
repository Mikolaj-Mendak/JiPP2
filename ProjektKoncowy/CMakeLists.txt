cmake_minimum_required(VERSION 3.20)
project(PrjektKońcowy)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(ProjektKoncowy src/miasta.cpp include/miasta.h src/main.cpp include/funkcje.h src/funkcje.cpp)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data/dane.csv
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/data)
