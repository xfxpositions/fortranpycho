section .text
    global _start
_start:
    mov eax, 0x4       ; write
    mov ebx, 1         ; stdout file descriptor
    mov cl, [table+2]
    mov [ecx], cl
    mov edx, 1       ; length of buffer
    int 0x80           ; calling system call
section .data
    table db 'a', 'b', 'c'
section .bss
    resb 1