section .text
	global _ft_strcmp

_ft_strcmp:							; rdi = s1, rsi = s2
	push	rcx
	mov		rcx, -1

	start_loop:	
		inc		rcx
		mov		al, BYTE [rdi+rcx]	; to store 1byte(8bits)
		mov		bl, BYTE [rsi+rcx]
		cmp		al, 0x0
		je		ret_null
		cmp		bl, 0x0
		je		ret_null
		cmp		al, bl				; if al == bl
		je		start_loop			; then loop
		ja		above
		jb		below
		jmp		end

ret_null:
	cmp		al, bl
	ja		above
	je		end
	jmp		below

above:
	pop		rcx
	mov		rax, 1
	ret

below:
	pop 	rcx
	mov		rax, -1
	ret

end:
	pop		rcx
	sub		rax, rbx
	ret