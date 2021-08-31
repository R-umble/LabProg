cmake_minimum_required(VERSION 3.20)
project(LabProg)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test)

set(SOURCE_FILES Attivita.cpp Attivita.h Registro.cpp Registro.h)
add_executable(LabProg main.cpp)
ADD_LIBRARY(core ${SOURCE_FILES})
target_link_libraries(LabProg core)
