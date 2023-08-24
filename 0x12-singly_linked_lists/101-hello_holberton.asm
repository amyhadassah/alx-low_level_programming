section .data
    hello_message db 'Hello, Holberton', 10, 0
    hello_message_len equ $ - hello_message

section .text
    extern printf
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, hello_message    ; First argument - format string
    call printf

    ; Exit the program using syscall
    mov rax, 60               ; syscall: exit
    xor rdi, rdi              ; status: 0
    syscall

