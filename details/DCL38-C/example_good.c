#include <stdlib.h>

struct flexibleArray
{
    int num;
    // Array size not specified, so therefore correct syntax
    int data[];
};

void func(size_t size)
{
    // Space is allocated for the struct
    struct flexibleArray *structP = (struct flexibleArray *)
        malloc(sizeof(struct flexibleArray) + sizeof(int) * (size - 1));
    if (structP == NULL)
    {
        // Handle Failure
    }

    structP->num = size;

    for (size_t i = 0; i < size; ++i)
    {
        structP->data[i] = 1;
    }
}