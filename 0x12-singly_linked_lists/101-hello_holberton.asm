section .data
hello db "Hello, Holberton", 10 ; The string to print, followed by a newline (10 is ASCII for newline)
hello_len equ $ - hello ; Compute the length of the string

section .text
extern printf ; Declare the external printf function
global main

main:
; Prepare arguments for printf
mov rdi, hello ; First argument for printf: format string
; Call printf
call printf

; Return from main
mov rax, 60 ; syscall: exit
xor rdi, rdi ; exit status 0
syscall

ret

