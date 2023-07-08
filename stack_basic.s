; this program is an example for stack
section .text
    global _start
_start:
    push ebp ; initializing the stack, saving old base pointer into stack
    mov ebp, esp ; set the new stack pointer
    push msg ; pushing msg into stack
    
    mov eax, [esp] ; we getting msg from stack
    mov [var1], eax
    pop ebp
    mov eax, 0x04
    mov ebx, 1
    mov ecx, [var1]
    mov edx, 10 
    int 0x80
    
    mov eax, 0x1
    mov ebx, 0
    int 0x80
section .data
    msg db 'A', 0xA, 0x0 ; a\n
section .bss
    var1 resb 4 ; declare 4 free bytes