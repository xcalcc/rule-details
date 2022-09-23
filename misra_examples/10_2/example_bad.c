#include <stdio.h>

void func( void )
{
    // essentially character type declared
    char char_var;
    int numb;
    char_var = '9';
    // the result of char_var + '>' do not make sense
    numb = char_var + '>';
}