cmake_minimum_required(VERSION 3.5)

project(leitura_arquivos_csv LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(leitura_arquivos_csv main.cpp)

install(TARGETS leitura_arquivos_csv
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
