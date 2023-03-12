cmake_minimum_required(VERSION 3.24)
project(final)

set(CMAKE_CXX_STANDARD 17)

add_executable(final main.cpp shapes.cpp shapes.h circle.cpp circle.h square.cpp square.h rectangle.cpp rectangle.h distancefunc.cpp distancefunc.h)
