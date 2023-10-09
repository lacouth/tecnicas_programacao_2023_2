cmake_minimum_required(VERSION 3.5)

project(batalha_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(batalha_cpp main.cpp)

install(TARGETS batalha_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
