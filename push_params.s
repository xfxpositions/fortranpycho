; this program takes 2 params x and y, the local variable z declared as 5, function returns x+y+z
section .text
    global _start
_start:
    push ebp ; initializing the stack, saving old base pointer into stack
    mov ebp, esp ; set the new stack pointer

    push 3 ; x
    push 3 ; y
    call function ; calls function
    
    mov eax, [var1]
    add eax, 48
    mov dword [var1], eax

    mov eax, 0x04
    mov ebx, 1
    mov ecx, var1
    mov edx, 2
    int 0x80

    mov eax, 0x1
    mov ebx, 0
    int 0x80
function:
    mov dword [esp+4], 5 ; z = 5

    mov eax, [esp+8] ; gets x
    mov ebx, [esp+12] ; gets y
    add eax, ebx ; x = x + y
    add eax, [esp+4] ; x = x + z
    mov dword [var1], eax
    ret
section .bss
    var1 resb 4
