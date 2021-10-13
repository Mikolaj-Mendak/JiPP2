cmake_minimum_required(VERSION 3.20)
project(allocation_basics)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(allocation_basics src/main.cpp include/main.h)

