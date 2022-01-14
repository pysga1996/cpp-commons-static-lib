cmake_minimum_required(VERSION 3.16)
project(cpp-commons)

set(CMAKE_CXX_STANDARD 14)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)
file(GLOB_RECURSE COMMON_SRC src/*.cpp src/*.h)
message(STATUS "Files are ${COMMON_SRC}")
include_directories(src src/common-collection src/common-matrix src/common-string src/common-number src/common-util)
add_library(cpp-commons SHARED ${COMMON_SRC})

file(GLOB_RECURSE COMMON_TEST test/*.cpp test/*/*.cpp)
add_executable(cpp-commons-test ${COMMON_SRC} ${COMMON_TEST})

#Link with GoogleTest
target_link_libraries(cpp-commons gtest gtest_main)

#Link with GoogleMock
target_link_libraries(cpp-commons-test gmock gmock_main)

file(GLOB ARRAY_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/common-collection)
file(GLOB MATRIX_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/test/common-matrix)
file(COPY ${ARRAY_TEST_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
file(COPY ${MATRIX_TEST_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)
