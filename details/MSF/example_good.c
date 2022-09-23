#include <stdio.h>

struct S
{
    int *p;
};

int main()
{
    int *p;
    struct S *s;
    p = malloc(10 * sizeof(int)); // heap memory allocated and pointed to by p
    if (p == NULL)
    {
        return 1;
    }
    s = (struct S *)malloc(sizeof(struct S)); // heap memory allocated and pointed to by s
    if (s == NULL)
    {
        free(p);
        return 1;
    }
    s->p = p;
    // both s and p are freed
    free(s); 
    free(p); 
    return 0;
}