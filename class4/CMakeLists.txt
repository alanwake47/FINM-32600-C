cmake_minimum_required(VERSION 3.24)
project(class4)

set(CMAKE_CXX_STANDARD 17)

add_executable(class4 main.cpp cmake-build-debug/converter.cpp cmake-build-debug/currency.h cmake-build-debug/converter.h)
