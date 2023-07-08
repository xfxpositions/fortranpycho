section .text
    global _start

_start:
    ; Move value to [x]
    mov edi, 9
    add edi, 48
    mov byte [x+4], 0xa
    mov [x], edi

    ; Write string to standard output
    mov eax, 0x04
    mov ebx, 0x1
    mov ecx, x
    mov edx, 0x5
    int 0x80

    ; Exit program
    mov eax, 0x01
    mov ebx, 0x0
    int 0x80

section .data
    msg db 'bune'

section .bss
    x resb 5
    y resb 4
    z resb 4
