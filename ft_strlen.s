section.text:
	global _ft_strlen

_ft_strlen:
	mov rax, 0x0 ; count set to 0 - rax is returned value
	start_loop:
		cmp byte [rdi + rax], 0x0 ; compare rdi + rax char to \0
		jz end_loop ; if compare true then go to flag end_loop
		inc rax	; increment count
		jmp start_loop ; restart loop
	end_loop:
	ret