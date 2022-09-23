#### Abstract
The program has used realloc() that causes a pointer with alignment which is then less restrictive than before the memory reallocation.

#### Explanation
realloc() will allocate new memory and set the previously allocated memory pointer to the newly allocated area. If the previously allocated memory has more restricted alignment (e.g. 16B), the memory that is newly pointed to it will not satisfy this restriction resulting in an unexpected program behavior.
