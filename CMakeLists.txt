cmake_minimum_required(VERSION 3.16)
project(cpp-commons)

set(CMAKE_CXX_STANDARD 14)

add_library(cpp-commons library.cpp library.h src/string_util.cpp src/data_util.cpp)