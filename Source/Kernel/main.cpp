extern "C" {

// Multiboot header
__attribute__((section(".multiboot"), used, aligned(4)))
const unsigned int multiboot_header[] = {
    0x1BADB002,
    0x0,
    (unsigned int)(-(0x1BADB002))
};

volatile char* video = (volatile char*)0xb8000;

void print(const char* str) {
    int i = 0;
    while (str[i]) {
        video[i * 2] = str[i];
        video[i * 2 + 1] = 0x07;
        i++;
    }
}

void _start() {

  print("Hello marcel");

//    video[0] = 'H';
//    video[1] = 0x07;
    

    while (1) {
        asm volatile("hlt");
    }
}

}
