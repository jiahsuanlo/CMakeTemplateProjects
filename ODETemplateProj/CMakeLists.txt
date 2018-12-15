cmake_minimum_required(VERSION 3.5)

# set project name
set(PROJ_NAME example)
project(${PROJ_NAME})

# set ode folder
set(ODEDIR C:/dev/ode-0.15.2)

# set include path to ode source 
include_directories(${ODEDIR}/include
	${ODEDIR}/ode/src ${ODEDIR}/ode/demo)
	
# add preprocessors
add_definitions(-DdIDEDOUBLE -DCCD_IDEDOUBLE -D_CRT_SECURE_NO_DEPRECATE
	-D_SCL_SECURE_NO_WARNINGS
	-D_USE_MATH_DEFINES)
# add texture path preprocessors
add_definitions(-DDRAWSTUFF_TEXTURE_PATH="${ODEDIR}/drawstuff/textures")

add_executable(${PROJ_NAME} main.cpp
	${ODEDIR}/drawstuff/src/resources.rc)

# link library need to do one at a time for each configuration
target_link_libraries(${PROJ_NAME} debug ${ODEDIR}/lib/Debug/oded.lib)
target_link_libraries(${PROJ_NAME} optimized ${ODEDIR}/lib/Release/ode.lib)
target_link_libraries(${PROJ_NAME} debug ${ODEDIR}/lib/Debug/drawstuffd.lib)
target_link_libraries(${PROJ_NAME} optimized ${ODEDIR}/lib/Release/drawstuff.lib)

