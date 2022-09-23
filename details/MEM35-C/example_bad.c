#include <stdlib.h>

typedef struct
{
    size_t len;
    int *data;
} vect_record, *vect_ptr;

vect_record *vector_new(size_t len)
{
    vect_record *vect;
    // size of pointer used to determine size of pointed-to object
    vect_ptr result = (vect_ptr)malloc(sizeof(vect));
    if (result == NULL)
    {
        // handle error and return
        return NULL;
    }

    // initialize vector
    result[0].len = 1;
    result[1].len = 2;
    // ...
    return result;
}