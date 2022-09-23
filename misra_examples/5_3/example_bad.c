#include <stdio.h>

int a = 1; // identifier defined, outer scope

void func ( char a ) // identifier defined, inner scope, covering the outer one
{
    a = a + "hello";
}