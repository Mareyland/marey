cmake_minimum_required(VERSION 3.20)
project(booter)

add_library(${PROJECT_NAME} OBJECT
  main.cpp
)

target_link_options(${PROJECT_NAME} PRIVATE
  -T ${CMAKE_SOURCE_DIR}/linker.ld
  -nostdlib
)
