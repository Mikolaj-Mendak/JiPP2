cmake_minimum_required(VERSION 3.20)
project(allocation_basics)

set(CMAKE_CXX_STANDARD 14)
include_directories(include)
add_executable(allocation_basics src/main.cpp include/main.h ../firstLib/src/lib.cpp ../firstLib/include/lib.h ../firstLibCall/main.cpp ../zadania_18.10.21/zadania_funkcje.cpp "../zadania_25.10.21/src/zadania_struktury.cpp" ../matrixLib/include/matrixLib.h ../matrixLib/src/matrixLib.cpp ../matrixApp/include/mainHeader.h ../matrixApp/src/main.cpp ../zadania_08.11.2021/src/main.cpp ../zadania_08.11.2021/src/point.cpp ../zadania_15.11.21/include/vector.h ../zadania_15.11.21/src/vector.cpp ../zadania_15.11.21/src/main.cpp ../zadania_15.11.21/include/node.h ../zadania_22.11.2021/include/figura.h ../zadania_22.11.2021/src/figura.cpp ../zadania_22.11.2021/src/main.cpp ../zadania_29.11.2021/include/Note.h ../zadania_06.12.2021/src/vector.cpp ../Lab9example/Line.cpp ../Lab9example/Stop.cpp ../Lab9example/vExample.cpp ../Lab9example/Line.h ../Lab9example/Stop.h ../ProjektKoncowy/src/main.cpp ../ProjektKoncowy/include/miasta.h ../ProjektKoncowy/src/miasta.cpp)

