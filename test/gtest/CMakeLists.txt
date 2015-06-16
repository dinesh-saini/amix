cmake_minimum_required(VERSION 2.6)

SET(GCC_COVERAGE_COMPILE_FLAGS "-std=gnu++11")
add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(doTest test.cxx)

target_link_libraries(doTest ${GTEST_LIBRARIES} pthread)
