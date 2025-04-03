	.file	"Q1_v1.c"
	.section .rdata,"dr"
LC3:
	.ascii "\12Execution time: %f\0"
	.text
	.globl	_mysqrt
	.def	_mysqrt;	.scl	2;	.type	32;	.endef
_mysqrt:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$88, %esp
	call	_clock
	movl	%eax, -20(%ebp)
	fldl	LC0
	fstpl	-32(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -68(%ebp)
	fildl	-68(%ebp)
	fstpl	-16(%ebp)
	fldl	-16(%ebp)
	fmull	-16(%ebp)
	fildl	8(%ebp)
	faddl	-32(%ebp)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	sahf
	jb	L15
	jmp	L4
L5:
	fldl	-16(%ebp)
	fsubl	-32(%ebp)
	fstpl	-16(%ebp)
L4:
	fldl	-16(%ebp)
	fmull	-16(%ebp)
	fildl	8(%ebp)
	faddl	-32(%ebp)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	sahf
	jnb	L5
	jmp	L6
L15:
	jmp	L7
L8:
	fldl	-16(%ebp)
	faddl	-32(%ebp)
	fstpl	-16(%ebp)
L7:
	fldl	-16(%ebp)
	fmull	-16(%ebp)
	fildl	8(%ebp)
	fsubl	-32(%ebp)
	fucompp
	fnstsw	%ax
	sahf
	jnb	L8
L6:
	fldl	-16(%ebp)
	fnstcw	-58(%ebp)
	movzwl	-58(%ebp), %eax
	movb	$12, %ah
	movw	%ax, -60(%ebp)
	fldcw	-60(%ebp)
	fistpl	-68(%ebp)
	fldcw	-58(%ebp)
	fildl	-68(%ebp)
	fldl	-16(%ebp)
	fsubp	%st, %st(1)
	fldl	LC1
	fucompp
	fnstsw	%ax
	sahf
	jbe	L16
	fldl	-16(%ebp)
	fldcw	-60(%ebp)
	fistpl	-68(%ebp)
	fldcw	-58(%ebp)
	fildl	-68(%ebp)
	fstpl	-16(%ebp)
	jmp	L11
L16:
	fldl	-16(%ebp)
	fldcw	-60(%ebp)
	fistpl	-64(%ebp)
	fldcw	-58(%ebp)
	movl	-64(%ebp), %eax
	addl	$1, %eax
	movl	%eax, -68(%ebp)
	fildl	-68(%ebp)
	fstpl	-16(%ebp)
L11:
	call	_clock
	movl	%eax, -36(%ebp)
	movl	-36(%ebp), %eax
	subl	-20(%ebp), %eax
	movl	%eax, -68(%ebp)
	fildl	-68(%ebp)
	fstpl	-48(%ebp)
	fldl	-48(%ebp)
	fldl	LC2
	fdivrp	%st, %st(1)
	fstpl	4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	fldl	-16(%ebp)
	fnstcw	-58(%ebp)
	movzwl	-58(%ebp), %eax
	movb	$12, %ah
	movw	%ax, -60(%ebp)
	fldcw	-60(%ebp)
	fistpl	-64(%ebp)
	fldcw	-58(%ebp)
	movl	-64(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC5:
	.ascii "Enter the number you want to calculate the integer square root of: \0"
LC6:
	.ascii "%d\0"
LC7:
	.ascii "Not a nonnegative integer!\0"
	.align 4
LC8:
	.ascii "\12Nearest integer square root of %d: %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$LC5, (%esp)
	call	_printf
	leal	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_scanf
	movl	8(%ebp), %eax
	testl	%eax, %eax
	jns	L18
	movl	$LC7, (%esp)
	call	_printf
	movl	$0, %eax
	jmp	L19
L18:
	movl	8(%ebp), %eax
	movl	%eax, 8(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_mysqrt
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	$0, %eax
L19:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.section .rdata,"dr"
	.align 8
LC0:
	.long	1202590843
	.long	1065646817
	.align 8
LC1:
	.long	0
	.long	1071644672
	.align 8
LC2:
	.long	0
	.long	1083129856
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_clock;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
