cmake_minimum_required(VERSION 3.20.0)

project(MatrixCalc CXX)

set(CMAKE_CXX_STANDARD 11)

set(TARGET ${PROJECT_NAME})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${TARGET} main.cpp)

add_subdirectory(src)
add_subdirectory(tests)