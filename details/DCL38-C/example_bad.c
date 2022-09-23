#include <stdlib.h>

struct flexibleArray
{
    int num;
    // Array is declared with size 1, so therefore incorrect syntax
    int data[1];
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

    // Index out of bounds if size is greater than 1
    for (size_t i = 0; i < size; ++i)
    {
        structP->data[i] = 1;
    }
}