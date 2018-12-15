cmake_minimum_required(VERSION 3.5)

# set project name
set(PROJ_NAME example)

# set OSG folder
set(OSG_DIR "C:/Program Files/OpenSceneGraph")
set(OSG_INCLUDE_DIR ${OSG_DIR}/include)
set(OSG_LIB_DIR ${OSG_DIR}/lib)

project(${PROJ_NAME})

# set cmake policy
#IF(COMMAND CMAKE_POLICY)
#	CMAKE_POLICY(SET CMP0003 NEW)
#ENDIF(COMMAND CMAKE_POLICY)

#IF(WIN32)
#	IF(MSVC)
#		ADD_DEFINITIONS(-D_SCL_SECURE_NO_WARNINGS)
#		ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE)
#	ENDIF(MSVC)
#ELSE(WIN32)
#	SET(CMAKE_CXX_FLAGS "-W -Wall -Wno-unused")
#ENDIF(WIN32)


# set include path  
include_directories(${OSG_INCLUDE_DIR})

# set library path
link_directories(${OSG_LIB_DIR})

# add main file
add_executable(${PROJ_NAME} main.cpp)

# link library need to do one at a time for each configuration
target_link_libraries(${PROJ_NAME} debug osgd.lib)
target_link_libraries(${PROJ_NAME} debug osgUtild.lib)
target_link_libraries(${PROJ_NAME} debug osgViewerd.lib)
target_link_libraries(${PROJ_NAME} debug osgDBd.lib)
target_link_libraries(${PROJ_NAME} debug osgGAd.lib)
target_link_libraries(${PROJ_NAME} debug OpenThreadsd.lib)

target_link_libraries(${PROJ_NAME} optimized osg.lib)
target_link_libraries(${PROJ_NAME} optimized osgUtil.lib)
target_link_libraries(${PROJ_NAME} optimized osgViewer.lib)
target_link_libraries(${PROJ_NAME} optimized osgDB.lib)
target_link_libraries(${PROJ_NAME} optimized osgGA.lib)
target_link_libraries(${PROJ_NAME} optimized OpenThreads.lib)
