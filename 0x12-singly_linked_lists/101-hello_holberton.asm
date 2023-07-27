section .data
    hello_holberton db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global main
    extern printf, exit

main:
    push rbp
    mov rbp, rsp

    and rsp, -16

    mov rdi, format
    mov rsi, hello_holberton
    call printf

    mov rdi, 0
    call exit