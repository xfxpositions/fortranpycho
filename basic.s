section .text
    global _start

_start:
    mov eax, 0x4       ; write
    mov ebx, 1         ; stdout file descriptor
    mov ecx, message   ; buffer to write
    mov edx, len       ; length of buffer
    int 0x80           ; calling system call

    mov eax, 0x4       ; write
    mov ebx, 1         ; stdout file descriptor
    mov ecx, message2  ; buffer to write
    mov edx, 10        ; length of buffer including newline
    int 0x80           ; calling system call

    mov eax, 0x1       ; exiting the program
    mov ebx, 0         ; return no error codes (optional)
    int 0x80           ; calling system call

section .data
    message db 'Nine starts to write', 0xA
    len equ $ - message

    message2 times 9 db '*'

