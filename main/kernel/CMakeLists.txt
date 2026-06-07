cmake_minimum_required(VERSION 3.20)
project(kernel)

set(CXX_FLAGS
  -m32
  -ffreestanding
  -nostdlib
  -fno-exceptions
  -fno-rtti
  -fno-pie
)

set(LD_FLAGS
  -m elf_i386
  -T linker.ld
  -nostdlib
)

add_library(${PROJECT_NAME}
  main.cpp
)

target_compile_options(${PROJECT_NAME} PRIVATE
  ${CXX_FLAGS}
)

target_link_options(${PROJECT_NAME} PRIVATE
  ${LD_FLAGS}
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
          $<TARGET_FILE:${PROJECT_NAME}>
          ${CMAKE_SOURCE_DIR}/iso/boot/${PROJECT_NAME}
  COMMAND grub-mkrescue -o os.iso iso
  COMMAND qemu-system-x86_64 -cdrom os.iso
)
