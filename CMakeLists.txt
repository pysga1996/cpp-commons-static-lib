cmake_minimum_required(VERSION 3.16)
project(cpp-commons)

set(CMAKE_CXX_STANDARD 14)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)

include_directories(include)

file(GLOB_RECURSE COMMON_SRC ./src/*.cpp ./src/*/*.cpp ./include/*.h)
message(STATUS "Files are ${COMMON_SRC}")
add_library(cpp-commons ${COMMON_SRC})

file(GLOB_RECURSE COMMON_TEST test/*.cpp test/*/*.cpp)
add_executable(cpp-commons-test ${COMMON_SRC} ${COMMON_TEST})

#Link with GoogleTest
target_link_libraries(cpp-commons-test gtest gtest_main)

#Link with GoogleMock
target_link_libraries(cpp-commons-test gmock gmock_main)

file(GLOB ARRAY_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/common_collection)
file(GLOB MATRIX_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/common_matrix)
file(GLOB UTIL_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/common_util)

file(COPY ${ARRAY_TEST_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
file(COPY ${MATRIX_TEST_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
file(COPY ${UTIL_TEST_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)

