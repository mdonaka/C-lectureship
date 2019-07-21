	.file	"3.cpp"
	.text
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.1.0-2ubuntu2~18.04) 9.1.0"
	.section	.note.GNU-stack,"",@progbits
