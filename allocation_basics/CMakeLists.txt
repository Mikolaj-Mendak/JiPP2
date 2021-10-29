cmake_minimum_required(VERSION 3.20)
project(allocation_basics)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(allocation_basics src/main.cpp include/main.h ../firstLib/src/lib.cpp ../firstLib/include/lib.h ../firstLibCall/main.cpp ../zadania_18.10.21/zadania_funkcje.cpp "../zadania_25.10.21/zadanie1.cpp" ../matrixLib/include/matrixLib.h ../matrixLib/src/matrixLib.cpp ../matrixApp/include/mainHeader.h ../matrixApp/src/main.cpp)

