#include <stdio.h>
#include <stdlib.h>

// function calls random() with proper seeding
void print_rand(void)
{
    srandom(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        printf("%lx \n", random());
    }
}
