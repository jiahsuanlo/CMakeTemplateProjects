cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

find_package(PCL 1.10.1)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

# === report PCL Information
message([main] "PCL_ROOT= $ENV{PCL_ROOT}")
message ([main] "PCL_DIR = ${PCL_DIR}")
message ([main] "PCL_INCLUDE_DIRS = ${PCL_INCLUDE_DIRS}")
message ([main] "PCL_LIBRARY_DIRS = ${PCL_LIBRARY_DIRS}")
message ([main] "PCL_LIBRARIES = ${PCL_LIBRARIES}")