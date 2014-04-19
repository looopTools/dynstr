	.section	__TEXT,__text,regular,pure_instructions
	.globl	_concatestrings
	.align	4, 0x90
_concatestrings:                        ## @concatestrings
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	pushq	%rax
Ltmp6:
	.cfi_offset %rbx, -56
Ltmp7:
	.cfi_offset %r12, -48
Ltmp8:
	.cfi_offset %r13, -40
Ltmp9:
	.cfi_offset %r14, -32
Ltmp10:
	.cfi_offset %r15, -24
	movq	%rsi, %r14
	movq	%rdi, %r12
	callq	_strlen
	movq	%rax, %r15
	movq	%r14, %rdi
	callq	_strlen
	leaq	1(%r15,%rax), %rdi
	callq	_malloc
	movq	%rax, -48(%rbp)         ## 8-byte Spill
	movb	(%r12), %r15b
	xorl	%r14d, %r14d
	testb	%r15b, %r15b
	movl	$0, %r13d
	je	LBB0_8
## BB#1:
	movl	$1, %r13d
	movb	%r15b, %al
	jmp	LBB0_2
	.align	4, 0x90
LBB0_9:                                 ## %._crit_edge15
                                        ##   in Loop: Header=BB0_2 Depth=1
	movb	(%r12,%rbx), %al
	incl	%r13d
	movq	%rbx, %r14
LBB0_2:                                 ## %.lr.ph6
                                        ## =>This Inner Loop Header: Depth=1
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	movb	%al, (%rcx,%r14)
	leaq	1(%r14), %rbx
	movq	%r12, %rdi
	callq	_strlen
	cmpq	%rax, %rbx
	jb	LBB0_9
## BB#3:                                ## %.preheader
	testb	%r15b, %r15b
	je	LBB0_8
## BB#4:                                ## %.lr.ph
	movslq	%r13d, %r13
	addq	-48(%rbp), %r13         ## 8-byte Folded Reload
	movl	$1, %ebx
	jmp	LBB0_5
	.align	4, 0x90
LBB0_6:                                 ## %._crit_edge14
                                        ##   in Loop: Header=BB0_5 Depth=1
	movb	(%r12,%rbx), %r15b
	incq	%rbx
LBB0_5:                                 ## =>This Inner Loop Header: Depth=1
	movb	%r15b, -1(%r13,%rbx)
	movq	%r12, %rdi
	callq	_strlen
	cmpq	%rax, %rbx
	jb	LBB0_6
## BB#7:                                ## %._crit_edge.loopexit
	leal	1(%r14,%rbx), %r13d
LBB0_8:                                 ## %._crit_edge
	movslq	%r13d, %rcx
	movq	-48(%rbp), %rax         ## 8-byte Reload
	movb	$0, (%rax,%rcx)
	addq	$8, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
