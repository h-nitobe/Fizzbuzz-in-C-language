        .arch armv6
        .eabi_attribute 28, 1
        .eabi_attribute 20, 1
        .eabi_attribute 21, 1
        .eabi_attribute 23, 3
        .eabi_attribute 24, 1
        .eabi_attribute 25, 1
        .eabi_attribute 26, 2
        .eabi_attribute 30, 6
        .eabi_attribute 34, 1
        .eabi_attribute 18, 4
        .file   "fizzbuzz.c"
        .text
        .section        .rodata
        .align  2
.LC0:
        .ascii  "Fizz\000"
        .align  2
.LC1:
        .ascii  "Buzz\000"
        .align  2
.LC2:
        .ascii  "%d\000"
        .text
        .align  2
        .global main
        .arch armv6
        .syntax unified
        .arm
        .fpu vfp
        .type   main, %function
main:
        @ args = 0, pretend = 0, frame = 8
        @ frame_needed = 1, uses_anonymous_args = 0
        push    {fp, lr}
        add     fp, sp, #4
        sub     sp, sp, #8
        mov     r3, #1
        str     r3, [fp, #-8]
        b       .L2
.L6:
        ldr     r1, [fp, #-8]
        ldr     r3, .L7
        smull   r3, r2, r3, r1
        asr     r3, r1, #31
        sub     r2, r2, r3
        mov     r3, r2
        lsl     r3, r3, #1
        add     r3, r3, r2
        sub     r2, r1, r3
        cmp     r2, #0
        bne     .L3
        ldr     r0, .L7+4
        bl      printf
.L3:
        ldr     r1, [fp, #-8]
        ldr     r3, .L7+8
        smull   r2, r3, r3, r1
        asr     r2, r3, #1
        asr     r3, r1, #31
        sub     r2, r2, r3
        mov     r3, r2
        lsl     r3, r3, #2
        add     r3, r3, r2
        sub     r2, r1, r3
        cmp     r2, #0
        bne     .L4
        ldr     r0, .L7+12
        bl      printf
.L4:
        ldr     r1, [fp, #-8]
        ldr     r3, .L7
        smull   r3, r2, r3, r1
        asr     r3, r1, #31
        sub     r2, r2, r3
        mov     r3, r2
        lsl     r3, r3, #1
        add     r3, r3, r2
        sub     r2, r1, r3
        cmp     r2, #0
        beq     .L5
        ldr     r1, [fp, #-8]
        ldr     r3, .L7+8
        smull   r2, r3, r3, r1
        asr     r2, r3, #1
        asr     r3, r1, #31
        sub     r2, r2, r3
        mov     r3, r2
        lsl     r3, r3, #2
        add     r3, r3, r2
        sub     r2, r1, r3
        cmp     r2, #0
        beq     .L5
        ldr     r1, [fp, #-8]
        ldr     r0, .L7+16
        bl      printf
.L5:
        mov     r0, #32
        bl      putchar
        ldr     r3, [fp, #-8]
        add     r3, r3, #1
        str     r3, [fp, #-8]
.L2:
        ldr     r3, [fp, #-8]
        cmp     r3, #100
        ble     .L6
        mov     r0, #10
        bl      putchar
        nop
        sub     sp, fp, #4
        @ sp needed
        pop     {fp, pc}
.L8:
        .align  2
.L7:
        .word   1431655766
        .word   .LC0
        .word   1717986919
        .word   .LC1
        .word   .LC2
        .size   main, .-main
        .ident  "GCC: (Raspbian 8.3.0-6+rpi1) 8.3.0"
        .section        .note.GNU-stack,"",%progbits
