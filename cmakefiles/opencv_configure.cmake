cmake_minimum_required(VERSION 3.8)

cmake_policy(SET CMP0074 NEW)
find_package(OpenCV HINTS $ENV{OpenCV_ROOT})

set(OpenCV_LIB_DIR $ENV{OpenCV_ROOT}/x64/vc16/lib)

include_directories( ${OpenCV_INCLUDE_DIRS} )
link_directories(${OpenCV_LIB_DIR})

message([main] "OpenCV_LIB_DIR= ${OpenCV_LIB_DIR}")
message([main] "OpenCV_LIBS= ${OpenCV_LIBS}")
message([main] "OpenCV_INCLUDE_DIRS= ${OpenCV_INCLUDE_DIRS}")
message([main] "OpenCV_VERSION= ${OpenCV_VERSION}")
string(REGEX REPLACE "\\." "" OpenCV_VER ${OpenCV_VERSION})
message([main] "OpenCV_VER= ${OpenCV_VER}")

# set library name list
set(OPENCV_DEBUG_LIBRARIES opencv_core${OpenCV_VER}d.lib
                           opencv_highgui${OpenCV_VER}d.lib
                           opencv_imgproc${OpenCV_VER}d.lib
                           opencv_imgcodecs${OpenCV_VER}d.lib
                           opencv_videoio${OpenCV_VER}d.lib
                           opencv_calib3d${OpenCV_VER}d.lib
                           opencv_features2d${OpenCV_VER}d.lib)
                           
                           #opencv_video${Open_VER}d.lib)
set(OPENCV_OPTIMIZED_LIBRARIES opencv_core${OpenCV_VER}.lib						 
                               opencv_highgui${OpenCV_VER}.lib
                               opencv_imgproc${OpenCV_VER}.lib
                               opencv_imgcodecs${OpenCV_VER}.lib
                               opencv_videoio${OpenCV_VER}.lib
                               opencv_calib3d${OpenCV_VER}.lib
                               opencv_features2d${OpenCV_VER}.lib)
                               
                               #opencv_video${Open_VERSION}.lib)