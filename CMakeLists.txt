cmake_minimum_required(VERSION 3.22)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled2 Bus.cpp Bus.h olc6502.cpp olc6502.h olcNes_Video1_6502.cpp)
