#ifndef MAREY_LOWLEVEL_BOOTER_H
#define MAREY_LOWLEVEL_BOOTER_H
void kernelMain();

extern "C" {
// Multiboot header
__attribute__((section(".multiboot"), used, aligned(4)))
inline const unsigned int multiboot_header[] = {
    0x1BADB002,
    0x0,
    (unsigned int)(-(0x1BADB002))
};

inline void _start() {
    ::kernelMain();

    while (1) {
        asm volatile("hlt");
    }
}
}
#endif // MAREY_LOWLEVEL_BOOTER_H
