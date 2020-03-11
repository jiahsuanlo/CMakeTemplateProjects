cmake_minimum_required(VERSION 3.8)

# set opencv folder
set(OPENCV_DIR C:/dev/opencv/build/install)
set(OPENCV_LIB_DIR ${OPENCV_DIR}/x64/vc14/lib)

# set include path  
include_directories(${OPENCV_DIR}/include)
# set library path
link_directories(${OPENCV_LIB_DIR})

# set library name list
set(OPENCV_DEBUG_LIBRARIES opencv_core340d.lib
                           opencv_highgui340d.lib
                           opencv_imgproc340d.lib
                           opencv_imgcodecs340d.lib)
                           #opencv_feature2d340d.lib
                           #opencv_calib3d340d.lib
                           #opencv_video340d.lib)
set(OPENCV_OPTIMIZED_LIBRARIES opencv_core340.lib						 
                               opencv_highgui340.lib
                               opencv_imgproc340.lib
                               opencv_imgcodecs340.lib)
                               #opencv_feature2d340.lib
                               #opencv_calib3d340.lib
                               #opencv_video340.lib)