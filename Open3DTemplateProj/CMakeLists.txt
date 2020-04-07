cmake_minimum_required(VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)

project(TestVisualizer)

include("open3d_config.cmake")

add_executable(TestVisualizer TestVisualizer.cpp)
target_link_libraries(TestVisualizer ${Open3D_LIBRARIES})


