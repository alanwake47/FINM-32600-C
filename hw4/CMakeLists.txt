cmake_minimum_required(VERSION 3.24)
project(hw4)

set(CMAKE_CXX_STANDARD 20)

add_executable(hw4 main.cpp option.cpp option.h europeancall.cpp europeancall.h europeanput.cpp europeanput.h)
