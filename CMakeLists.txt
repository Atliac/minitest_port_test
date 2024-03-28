cmake_minimum_required (VERSION 3.8)

project ("minitest_port_test")

# specify the C++ standard 
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(CTest)

add_executable (minitest_port_test "main.cpp")

find_package(atliac-minitest CONFIG REQUIRED)
minitest_discover_tests(minitest_port_test)
