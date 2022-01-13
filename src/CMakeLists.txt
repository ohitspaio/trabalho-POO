cmake_minimum_required(VERSION 3.20)
project(trabalho_POO)

set(CMAKE_CXX_STANDARD 14)

include_directories(../inc)

add_executable(trabalho_POO
        edificios.h
        trabalhadores.h
        edificios.cpp
        trabalhadores.cpp
        main.cpp libs.h zonas.cpp zonas.h ilha.cpp ilha.h)
