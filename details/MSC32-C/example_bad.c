#include <stdio.h>
#include <stdlib.h>

// this function calls random() without proper seeding it
// output of this function will be the same each time it is called
void print_rand(void)
{
    for (int i = 0; i < 20; i++)
    {
        printf("%lx \n", random());
    }
}



