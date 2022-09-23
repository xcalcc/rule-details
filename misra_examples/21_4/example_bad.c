#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

void func() {
    int val;
    jmp_buf env_buffer;

    val = setjmp(env_buffer);

    // Set value to val after lngjmp
    if (val != 0) {
        printf("Return from longjmp with value = %d", val);
        exit(0);
    }

    // Jump back to top
    printf("Jump to top");
    // Using longjmp and setjmp can cause undefined behaviour
    longjmp(env_buffer, 10);
}