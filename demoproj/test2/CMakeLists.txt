# Now simply link against gtest or gtest_main as needed. Eg
include_directories("${CMAKE_SOURCE_DIR}/lib1")

add_executable(test2 main.cpp)
target_link_libraries(test2 lib1 gtest_main)
add_test(NAME example_test2 COMMAND test2)