cmake_minimum_required(VERSION 3.19)
project(cpp_common_functions_static_lib)

set(CMAKE_CXX_STANDARD 14)

add_library(cpp_common_functions_static_lib library.cpp library.h src/string_util.cpp src/data_util.cpp)