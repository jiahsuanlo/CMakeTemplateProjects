# Now simply link against gtest or gtest_main as needed. Eg
add_executable(test1 main.cpp)
target_link_libraries(test1 gtest_main)
add_test(NAME example_test COMMAND test1)