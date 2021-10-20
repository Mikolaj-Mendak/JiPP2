cmake_minimum_required(VERSION 3.20)
project(zadanie1)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(zadanie1 zadania_main.cpp zadania_funkcje.cpp funkcje.h)

