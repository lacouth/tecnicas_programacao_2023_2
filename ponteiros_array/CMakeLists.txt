cmake_minimum_required(VERSION 3.5)

project(ponteiros_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ponteiros_array main.cpp)

install(TARGETS ponteiros_array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
