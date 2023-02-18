cmake_minimum_required(VERSION 3.24)
project(hw3)

set(CMAKE_CXX_STANDARD 17)

add_executable(hw3 main.cpp currency.cpp currency.h CurrencyFactory.cpp CurrencyFactory.h)
