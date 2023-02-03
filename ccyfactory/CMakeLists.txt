cmake_minimum_required(VERSION 3.24)
project(ccyfactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(ccyfactory main.cpp converter.cpp converter.h currency.cpp currency.h)
