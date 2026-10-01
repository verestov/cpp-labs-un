cmake_minimum_required(VERSION 4.3)
project(labs2grade)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        lab2
        lab2/main.cpp
        lab2/Patient.cpp
        lab2/Patient.h
)

add_executable(
        lab3
        lab3/main.cpp
        lab3/Address.cpp
        lab3/Address.h
        lab3/Person.cpp
        lab3/Person.h
)
