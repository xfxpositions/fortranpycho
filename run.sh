nasm -f elf -o divine.o divine.s
ld -m elf_i386 -o divine.bin divine.o