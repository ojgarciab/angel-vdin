cmake_minimum_required(VERSION 3.10)

project(VDIN)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(vdin main.cpp vdin.cpp vdin.h)
