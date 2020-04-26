cmake_minimum_required(VERSION 3.10)

project("Hello")

include("openmp_configure.cmake")

add_executable(hello main.cpp)