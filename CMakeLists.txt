cmake_minimum_required(VERSION 3.20)
project(trabalho_POO)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)

add_executable(trabalho_POO
        inc/edificios.h
        inc/ilha.h
        inc/menus.h
        inc/trabalhadores.h
        inc/zonas.h
        src/cIlha.cpp
        src/edificios.cpp
        src/ilha.cpp
        src/menus.cpp
        src/trabalhadores.cpp
        src/zonas.cpp
        main.cpp)
