#include <stdio.h>

const char *p;
// Invalid for c_str to go out of scope while p holds
// the address
void func(void)
{
    // c_str will have local storage duration
    const char c_str[] = "Change";
    // p has file scope okstatic storage duration
    p = c_str; 
}
