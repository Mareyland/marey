cmake_minimum_required(VERSION 3.20)
project(Core)

include(${CMAKE_SOURCE_DIR}/cmake/stdset.cmake)

add_library(${PROJECT_NAME}
  CoreModule.cpp
  Kernel.cpp
)
