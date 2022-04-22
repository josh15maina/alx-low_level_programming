 ; Filename: hello_holberton.asm
 ; Author: Joshua Maina

global  main
extern  printf

section .text

main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
format:
	db  "Hello, Holberton", 10, 0
