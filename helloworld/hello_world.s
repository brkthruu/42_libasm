section   .text
    global    start

start:
    mov       rax, 0x02000004    ; syscall for write
    mov       rdi, 1             ; file handle 1 is stdout
    mov       rsi, message       ; address of string output
    mov       rdx, 13            ; number of bytes
    syscall                      ; invoke operating sys to do write
    mov       rax, 0x02000001    ; syscall for exit
    xor       rdi, rdi
    syscall                      ; invoke operating system to exit

section   .data
message:  
    db        "Hello, World", 10