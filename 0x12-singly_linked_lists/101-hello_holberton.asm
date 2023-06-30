section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8               ; align stack to 16 bytes

    push newline             ; push newline
    push format              ; push format arg
    push hello               ; push string
    call printf              ; call printf func
    add rsp, 24              ; clean up stack

    xor eax, eax             ; return 0
    add rsp, 8               ; restore stack
    ret

