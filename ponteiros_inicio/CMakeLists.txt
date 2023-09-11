cmake_minimum_required(VERSION 3.5)

project(ponteiros_inicio LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ponteiros_inicio main.cpp)

install(TARGETS ponteiros_inicio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
