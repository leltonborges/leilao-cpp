cmake_minimum_required(VERSION 3.23)
project(leilao)

set(CMAKE_CXX_STANDARD 23)

add_executable(leilao Lance.cpp Leilao.cpp Usuario.cpp Leilao.hpp Lance.hpp Usuario.hpp)