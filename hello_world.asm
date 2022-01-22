; hello_world.asm
; Author: Fernando
; Title: CTutorial - Hello World in assembly


global _start

section .text:

_start:
	mov eax, 0x4  			; use the write syscall
	mov ebx, 1 	  			; use stdout as the fd
	mov ecx, msg  			; use the message as the buffer
	mov edx, msg_len 		; and supply the length
	int 0x80				; invoke the syscall

	mov eax, 0x1			; operands giving to the move instruction
	mov ebx, 0
	int 0x80

section .data:
	msg: db "Hello World!", 0xA
	msg_len equ $-msg