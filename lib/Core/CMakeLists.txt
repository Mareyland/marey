cmake_minimum_required(VERSION 3.20)
project(Core)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME}
  CoreModule.cpp
  Kernel.cpp
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  Io
)
