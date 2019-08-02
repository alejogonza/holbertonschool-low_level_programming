	section .data

	msg      db "Hello, Holberton", 0
	fmt	 db "%s",10,0

	section .text
	global 	main
	extern 	printf

main:
	mov	rax, 0
	mov	rdi, fmt
	mov	esi, msg
	mov	rdx, 17
	call	printf

	mov	rax, 1
	ret
