cmake_minimum_required(VERSION 3.27)
project(School)

set(CMAKE_CXX_STANDARD 23)

add_executable(School main.cpp
        Person.cpp
        Person.h
        Student.h
        Student.cpp
        Teacher.h
        Teacher.cpp)
