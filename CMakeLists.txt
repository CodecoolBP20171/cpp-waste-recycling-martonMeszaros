cmake_minimum_required(VERSION 3.8)
project(cpp_waste_recycling_martonMeszaros)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/Garbage.hpp src/PaperGarbage.hpp src/PlasticGarbage.hpp src/DustbinContentError.hpp src/Dustbin.cpp src/Dustbin.h)
add_executable(cpp_waste_recycling_martonMeszaros ${SOURCE_FILES})