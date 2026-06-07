#include <marey/LowLevel/Io.h>

#include <cstdio>

namespace marey::LowLevel {
static volatile char *video = (volatile char*)0xb8000;

void kernelPrint(const char *str) {
    for (size_t i = 0; str[i] != '\0'; ++i) {
        video[i * 2] = str[i];
        video[i * 2 + 1] = 0x07;
    }
}
}
