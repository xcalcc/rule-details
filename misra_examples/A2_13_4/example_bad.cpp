#include <stdio.h>

void func ( void )
{
    char non_const1[] = "str_literal";      // non-compliant
    char* non_const2 = "str_literal";       // non-compliant
    char non_const3[ 12 ] = "str_literal";  // non-compliant
}