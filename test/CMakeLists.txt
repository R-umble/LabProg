cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILE AttivitaTest.cpp RegistroTest.cpp runAllTest.cpp)
add_executable(RunRubricTests ${SOURCE_FILE})

target_link_libraries(RunRubricTests gtest gtest_main core)
