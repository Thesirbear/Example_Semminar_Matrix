cmake_minimum_required(VERSION 3.0)

project(MyMatrix CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(MyMatrix main.cpp matrix.h matrix.cpp)
# add_executable(PloblemB b/main.cpp)
# add_executable(PloblemC c/main.cpp)
# add_executable(PloblemD d/main.cpp)
# add_executable(PloblemE e/main.cpp)
# add_executable(PloblemF f/main.cpp)
# add_executable(PloblemG g/main.cpp)
# add_executable(PloblemH h/main.cpp)
# add_executable(PloblemI i/main.cpp)
# add_executable(PloblemJ j/main.cpp)
