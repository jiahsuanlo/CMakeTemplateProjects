cmake_minimum_required(VERSION 3.5)

# set project name
set(PROJ_NAME example)

# set folders
set(BOOST_DIR "C:/dev/boost_1_59_0")
set(BOOST_LIB_DIR "C:/dev/boost_1_59_0/lib64-msvc-14.0")
set(APIHELPER_DIR "C:/dev/expcode/anvelhelper")
set(API_INCLUDE_DIR "C:/Program Files/Quantum Signal, LLC/ANVEL Commercial Edition/API/cpp/src")
set(THRIFT_INCLUDE_DIR "C:/dev/thrift-0.10.0/lib/cpp/src")
set(THRIFT_LIB_DIR "C:/dev/thrift-0.10.0/build/lib")


project(${PROJ_NAME})


# set include path  
include_directories(${THRIFT_INCLUDE_DIR} 
${API_INCLUDE_DIR}
${APIHELPER_DIR}
${BOOST_DIR})

# set library path
link_directories(${THRIFT_LIB_DIR} ${BOOST_LIB_DIR})
link_directories(${APIHELPER_DIR}/build/lib)


# add main file
add_executable(${PROJ_NAME} main.cpp)

# link library need to do one at a time for each configuration
target_link_libraries(${PROJ_NAME} debug anvelapi.lib)
target_link_libraries(${PROJ_NAME} optimized anvelapi.lib)

target_link_libraries(${PROJ_NAME} debug thriftmdd.lib)
target_link_libraries(${PROJ_NAME} optimized thriftmd.lib)

