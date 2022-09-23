#include <stdio.h>

void func ( void )
{
    const char a1[] = "str_literal";    // compliant
    const char* a2 = "str_literal";     // compliant
    const char a3[12] = "str_literal";  // compliant
}