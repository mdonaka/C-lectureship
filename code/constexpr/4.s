	.file	"4.cpp"
	.text
	.p2align 4
	.globl	_Z4funci
	.type	_Z4funci, @function
_Z4funci:
.LFB0:
	.cfi_startproc
	movl	%edi, %eax
	imull	%edi, %eax
	imull	%edi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4funci, .-_Z4funci
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
