cmake_minimum_required(VERSION 3.12)
project(Project2_OOP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project2_OOP
        list.cpp
        list.hpp
        main.cpp
        punkt.cpp
        punkt.hpp)
