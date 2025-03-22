global main

section .text
main:
    mov rax, 1        ; syscall number for sys_write
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rsi, msg      ; pointer to the message
    mov rdx, msglen   ; message length
    syscall           ; invoke system call

    mov rax, 60       ; syscall number for sys_exit
    xor rdi, rdi      ; status 0 (EXIT_SUCCESS)
    syscall           ; invoke system call

section .data
msg: db "Hello, World", 10
msglen: equ $ - msg
