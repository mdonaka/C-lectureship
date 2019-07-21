	.file	"1.cpp"
	.text
	.globl	_Z4sqrtd
	.type	_Z4sqrtd, @function
_Z4sqrtd:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movsd	%xmm0, -40(%rbp)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -16(%rbp)
.L6:
	movsd	-24(%rbp), %xmm0
	subsd	-16(%rbp), %xmm0
	comisd	.LC2(%rip), %xmm0
	jbe	.L9
	movsd	-24(%rbp), %xmm0
	addsd	-16(%rbp), %xmm0
	movsd	.LC3(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	movsd	-8(%rbp), %xmm0
	mulsd	%xmm0, %xmm0
	comisd	-40(%rbp), %xmm0
	seta	%al
	movb	%al, -25(%rbp)
	cmpb	$0, -25(%rbp)
	je	.L4
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, -24(%rbp)
	jmp	.L6
.L4:
	movsd	-8(%rbp), %xmm0
	movsd	%xmm0, -16(%rbp)
	jmp	.L6
.L9:
	movsd	-24(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4sqrtd, .-_Z4sqrtd
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	.LC3(%rip), %rax
	movq	%rax, %xmm0
	call	_Z4sqrtd
	movq	%xmm0, %rax
	movq	%rax, -24(%rbp)
	movq	.LC4(%rip), %rax
	movq	%rax, %xmm0
	call	_Z4sqrtd
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	movq	.LC5(%rip), %rax
	movq	%rax, %xmm0
	call	_Z4sqrtd
	movq	%xmm0, %rax
	movq	%rax, -8(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	2245566464
	.long	1131820119
	.align 8
.LC2:
	.long	3654794683
	.long	1037794527
	.align 8
.LC3:
	.long	0
	.long	1073741824
	.align 8
.LC4:
	.long	0
	.long	1076101120
	.align 8
.LC5:
	.long	0
	.long	1076756480
	.ident	"GCC: (Ubuntu 9.1.0-2ubuntu2~18.04) 9.1.0"
	.section	.note.GNU-stack,"",@progbits
