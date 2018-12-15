cmake_minimum_required(VERSION 3.5)

# set project name
set(PROJ_NAME example)
project(${PROJ_NAME})

# set opencv folder
set(OPENCV_DIR C:/dev/opencv-3.4.3/build/install)
set(OPENCV_LIB_DIR ${OPENCV_DIR}/x64/vc15/lib)

# set include path  
include_directories(${OPENCV_DIR}/include)

# set library path
link_directories(${OPENCV_LIB_DIR})

# add main file
add_executable(${PROJ_NAME} main.cpp)

# link library need to do one at a time for each configuration
target_link_libraries(${PROJ_NAME} debug opencv_core343d.lib)
target_link_libraries(${PROJ_NAME} debug opencv_highgui343d.lib)
target_link_libraries(${PROJ_NAME} debug opencv_imgproc343d.lib)
target_link_libraries(${PROJ_NAME} debug opencv_imgcodecs343d.lib)
#target_link_libraries(${PROJ_NAME} debug opencv_feature2d343d.lib)
#target_link_libraries(${PROJ_NAME} debug opencv_calib3d343d.lib)
#target_link_libraries(${PROJ_NAME} debug opencv_video343d.lib)

target_link_libraries(${PROJ_NAME} optimized opencv_core343.lib)
target_link_libraries(${PROJ_NAME} optimized opencv_highgui343.lib)
target_link_libraries(${PROJ_NAME} optimized opencv_imgproc343.lib)
target_link_libraries(${PROJ_NAME} optimized opencv_imgcodecs343.lib)
#target_link_libraries(${PROJ_NAME} optimized opencv_feature2d343.lib)
#target_link_libraries(${PROJ_NAME} optimized opencv_calib3d343.lib)
#target_link_libraries(${PROJ_NAME} optimized opencv_video343.lib)
