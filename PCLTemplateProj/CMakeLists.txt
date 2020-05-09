cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(${PROJ_NAME})

find_package(PCL 1.10.1 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(${PROJ_NAME} main.cpp)
target_link_libraries(hello ${PCL_LIBRARIES})
