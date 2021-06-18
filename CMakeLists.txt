cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp lib.cpp)

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_subdirectory(doctest)

add_executable(qqq_test test_main.cpp lib.cpp)