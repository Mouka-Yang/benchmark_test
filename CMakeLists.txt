cmake_minimum_required(VERSION 3.0.0)
project(benchmark_test VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(benchmark REQUIRED)

add_executable(benchmark_test main.cpp)
target_link_libraries(benchmark_test benchmark::benchmark_main)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
