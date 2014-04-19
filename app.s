	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	leaq	L_.str(%rip), %rdi
	leaq	L_.str1(%rip), %rsi
	callq	_concatestrings
	movq	%rax, %rcx
	leaq	L_.str2(%rip), %rdi
	xorl	%eax, %eax
	movq	%rcx, %rsi
	callq	_printf
	xorl	%eax, %eax
	popq	%rbp
	ret
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Hello "

L_.str1:                                ## @.str1
	.asciz	"World!!!"

L_.str2:                                ## @.str2
	.asciz	"%s"


.subsections_via_symbols
