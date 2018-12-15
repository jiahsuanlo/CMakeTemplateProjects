cmake_minimum_required(VERSION 3.5)

#set project name
set(PROJ_NAME example)
#set Eigen folder
set(EIGEN_DIR C:/dev/eigen-3.3.5)

project(${PROJ_NAME})

include_directories(${EIGEN_DIR})

add_executable(PROJ_NAME main.cpp)