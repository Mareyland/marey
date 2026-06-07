cmake_minimum_required(VERSION 3.20)
project(booter)

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

add_library(${PROJECT_NAME} OBJECT
  main.cpp
)

target_compile_options(${PROJECT_NAME} PRIVATE
  ${CXX_FLAGS}
)

target_link_options(${PROJECT_NAME} PRIVATE
  ${LD_FLAGS}
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND sh $(cp $in iso/boot/ && grub-mkrescue -o $out iso && qemu-system-x86_64 -cdrom $in)
)
