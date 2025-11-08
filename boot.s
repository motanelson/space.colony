

.section .text
.global _start
.global screens
.extern kernel_main

_start:
        mov 0x21cd4cff,%eax
	mov $stack_top, %esp
	call kernel_main
	cli
1:	hlt
	jmp 1b

.section .multiboot
.align 4


.section .bss
.align 16
stack_bottom:
.skip 16384 # 16 KiB
stack_top:


.section .text
.global _start
.global screens
.extern kernel_main

