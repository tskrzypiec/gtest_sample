cmake_minimum_required(VERSION 3.2)

# Project
project(gtest_sample)

# Flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -time")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
set(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")

# Libraries
## Project includes
include_directories(include)

## Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

## Boost
#find_package(Boost COMPONENTS ... REQUIRED)
#include_directories(${Boost_INCLUDE_DIRS})

# Main executable
set(gtest_sample_src
src/sample1.cc
src/potegowanie.cc
)
add_executable(gtest-sample
src/main.cc
${gtest_sample_src}
)

# Tests
set(test_src
tests/sample1_unittest.cc
tests/potegowanie_unittest.cc
)
add_executable(gtest-sample-test
${gtest_sample_src}
${test_src}
)
target_link_libraries(gtest-sample-test
${GTEST_BOTH_LIBRARIES}
pthread
gcov
)
add_test(AllTests gtest-sample-test)