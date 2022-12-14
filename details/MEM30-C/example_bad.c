#include <stddef.h>

int g = 2;

void my_free(void *p)
{
    if (p != NULL)
        free(p); // free p
}

int main()
{
    int i, j, *p, *q;
    p = malloc(10 * sizeof(int));
    if (p == NULL)
        return 1;
    for (i = 0; i < 10; ++i)
        p[i] = i;
    q = p;
    my_free(p); // p is freed
    j = 0;
    for (i = 0; i < 10; ++i)
        j += q[i]; // Use after free here (note the statement q = p), read of q[i] is illegal
    return j;
}