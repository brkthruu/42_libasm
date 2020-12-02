; char *strcpy(char * dst, const char * src)

section.text:
		global _ft_strcpy

_ft_strcpy:
		cmp	rsi, 0
		jz	end
    xor rcx, rcx
		xor rbx, rbx

copy_loop:
		cmp byte[rsi + rcx], 0
		jz end
		mov bl, byte[rsi + rcx]
		mov byte[rdi + rcx], bl
		inc rcx
		jmp copy_loop

end:
		mov rax, rdi
		ret