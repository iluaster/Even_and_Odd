# Even_and_Odd

X86 Assembly code


<pre>
.LC0:
        .string "%u"
.LC1:
        .string "Odd"
.LC2:
        .string "Even"
main:
        push    rbp
        mov     rbp, rsp
        sub     rsp, 32
        mov     DWORD PTR [rbp-20], edi
        mov     QWORD PTR [rbp-32], rsi
        mov     DWORD PTR [rbp-4], 0
</pre>
In my machine, one word is equivalent to 16 bits.
<pre>
        lea     rax, [rbp-4]
</pre>
load var i address into rax
<pre>
        mov     rsi, rax
        mov     edi, OFFSET FLAT:.LC0
        mov     eax, 0
        call    scanf
        mov     eax, DWORD PTR [rbp-4]
        and     eax, 1
</pre>
do AND operation
<pre>
        test    eax, eax
</pre>
it is equivalent to "cmp eax,0"
<pre>
        je      .L2
        mov     edi, OFFSET FLAT:.LC1
        call    puts
        jmp     .L3
.L2:
        mov     edi, OFFSET FLAT:.LC2
        call    puts
.L3:
        mov     eax, 0
        leave
        ret
</pre>
