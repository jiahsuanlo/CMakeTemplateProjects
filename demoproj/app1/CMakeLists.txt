# CMakeList.txt : CMake project for demoproj, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# set include directory
include_directories(${CMAKE_SOURCE_DIR}/lib1)

# set link directory
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

# include other library
include("${CMAKE_SOURCE_DIR}/cmake/opencv_configure.cmake")
include("${CMAKE_SOURCE_DIR}/cmake/pcl_configure.cmake")

# set opencv folder
set(OPENCV_DIR C:/dev/opencv/build/install)
set(OPENCV_LIB_DIR ${OPENCV_DIR}/x64/vc14/lib)

# set include path  
include_directories(${OPENCV_DIR}/include)

# Add source to this project's executable.
add_executable (app1 "app1.cpp" "app1.h")


# link library
target_link_libraries(app1 debug lib1 ${OPENCV_DEBUG_LIBRARIES} ${PCL_LIBRARIES})
target_link_libraries(app1 optimized lib1 ${OPEN_OPTIMIZED_LIBRARIES} ${PCL_LIBRARIES})
# TODO: Add tests and install targets if needed.
