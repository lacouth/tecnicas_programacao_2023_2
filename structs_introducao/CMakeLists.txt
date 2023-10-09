cmake_minimum_required(VERSION 3.5)

project(structs_introducao LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(structs_introducao main.cpp)

install(TARGETS structs_introducao
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
