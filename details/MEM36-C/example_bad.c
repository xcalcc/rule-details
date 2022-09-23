#include <stdlib.h>

int *vector_calc(size_t vec_sz, int elements)
{
 size_t align_vec = 1 << vec_sz;
 int *ptr_align;

 if ((ptr_align = (int *)aligned_alloc(align_vec, sizeof(int)*elements)) == NULL) {
 // handle error and return;
 // ...
 }

 // program continues
 // ...
 if ((ptr1 = (int *) realloc(ptr_align, sizeof(int)*elements * 2)) == NULL) {
 // handle error and return
 //...
 }

 // program continues
 // but ptr1 is not guaranteed to properly aligned with the vector objects previous allocated

 return ptr1;

}