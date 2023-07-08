section .data
    value1 dw 10
    value2 db 0
section .text
    global _start
_start:
    dec value1 
    inc value2

    mov eax, [value1]
    inc word [eax]

    mov eax, [value2]
    dec byte [eax]

    
    mov eax, 0x4       ; write
    mov ebx, 1         ; stdout file descriptor
    mov ecx, [value1]   ; buffer to write
    mov edx,        ; length of buffer
    int 0x80           ; calling system call

