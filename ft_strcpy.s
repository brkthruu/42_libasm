; char *strcpy(char *rdi, const char *rsi);

section .text
	global _ft_strcpy

_ft_strcpy:
	cmp	rsi, 0
	jz	end
  	xor rcx, rcx
	xor rbx, rbx

	copy_loop:
		cmp byte[rsi + rcx], 0
		jz end
		mov bl, byte[rsi + rcx]		; It's necessary to use temporary register
		mov byte[rdi + rcx], bl		; because memory to memory move is impossible
		inc rcx
		jmp copy_loop

	end:
		mov byte[rdi + rcx], 0
		mov rax, rdi
		ret