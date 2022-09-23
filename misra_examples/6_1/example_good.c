#include <stdio.h>

struct str
{
    signed int a:2;   // signed int permitted
    unsigned int b:2; // unsigned int permitted
};

int main()
{
    printf("finished");
    return 0;
}