cmake_minimum_required(VERSION 2.8)
project(IntSizeof)

include_directories("./Source")

# Test is static, not need to run executable, only build
add_executable(test_sizeof "Source/test.cpp")
