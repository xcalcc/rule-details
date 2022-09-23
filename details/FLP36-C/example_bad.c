#include <stdio.h>

// Example is from CERT-C Site
int func(void)
{
    long int num = 1234567890L;
    float convert = num;
    printf("%ld\n", (num - (long int)convert));
    return 0;
}