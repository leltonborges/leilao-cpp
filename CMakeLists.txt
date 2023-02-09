cmake_minimum_required(VERSION 3.23)
project(leilao)

set(CMAKE_CXX_STANDARD 23)

add_executable(leilao src/main/Lance.cpp src/main/Leilao.cpp src/main/Usuario.cpp src/main/Leilao.hpp src/main/Lance.hpp src/main/Usuario.hpp src/main/Avaliador.cpp src/main/Avaliador.h src/test/test-avalidor.cpp src/test/catch2.h)