section .text
	global _ft_strcmp

_ft_strcmp:							; rdi = s1, rsi = s2
		push	rcx
		mov		rcx, -1

start_loop:	
		inc		rcx
		mov		al, BYTE [rdi+rcx]	; to store 1byte(8bits)
		mov		bl, BYTE [rsi+rcx]
		cmp		ax, 0
		je		end
		cmp		bl, 0
		je		end
		cmp		al, bl			; if al == bl
    	je		start_loop			; then loop
		jmp		end

end:
	pop		rcx
	sub		rax, rbx
	ret