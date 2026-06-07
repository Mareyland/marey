# Tools
CXX = clang++
LD = ld

# Flags
CXXFLAGS = -m32 -ffreestanding -nostdlib -fno-exceptions -fno-rtti -fno-pie
LDFLAGS = -m elf_i386 -T arch/x86/linker.ld -nostdlib

# Files
SRC = main/main.cpp
OBJ = kernel.o
ELF = kernel.elf
ISO = grub.iso

# Default target
all: $(ISO)

# Compile
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link
$(ELF): $(OBJ)
	$(LD) $(LDFLAGS) $< -o $@

# Create ISO
$(ISO): $(ELF)
	cp $(ELF) iso/boot/
	grub-mkrescue -o $(ISO) iso

# Run
run: $(ISO)
	qemu-system-x86_64 -cdrom $(ISO)

# Clean
clean:
	rm -f $(OBJ) $(ELF) $(ISO)
