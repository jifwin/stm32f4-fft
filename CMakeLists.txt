cmake_minimum_required(VERSION 3.1)
project(auk)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    info/info
    README.md)

add_executable(auk ${SOURCE_FILES} testing/a.h testing/a.c testing/data.h testing/data.c testing/data22.h testing/data22.c)