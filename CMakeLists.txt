cmake_minimum_required(VERSION 3.20)
project(LabProg)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test)

find_package(wxWidgets REQUIRED COMPONENTS net core base)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES Registro.cpp Registro.h MyApp.cpp MyApp.h MyFrame.cpp MyFrame.h Observer.h Subject.h Controller.cpp Controller.h)
add_executable(LabProg main.cpp)
ADD_LIBRARY(core ${SOURCE_FILES})
target_link_libraries(LabProg core  ${wxWidgets_LIBRARIES})
