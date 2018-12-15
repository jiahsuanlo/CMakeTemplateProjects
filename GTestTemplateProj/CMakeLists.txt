cmake_minimum_required(VERSION 3.5)

set(TEST_PROJ_NAME MyTest)

project(${TEST_PROJ_NAME})
add_subdirectory(./googletest)
enable_testing()

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)


include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Add include and link directory required for testing
#include_directories(../src)
#link_directories(${CMAKE_BINARY_DIR}/lib/Debug)


add_executable(${TEST_PROJ_NAME} Test_MyTest.cpp)
target_link_libraries(runUnitTest gtest gtest_main)

# Link library if needed
#target_link_libraries(runUnitTest RCUtild.lib)

add_test(${TEST_PROJ_NAME} Test_MyTest)
