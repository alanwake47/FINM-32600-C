cmake_minimum_required(VERSION 3.24)
project(hw5)

set(CMAKE_CXX_STANDARD 20)

add_executable(hw5 main.cpp option.cpp option.h europeancall.cpp europeancall.h europeanput.cpp europeanput.h pricer.cpp pricer.h boxmuller.cpp boxmuller.h)
