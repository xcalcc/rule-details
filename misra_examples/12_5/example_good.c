#include <stdint.h>

int arr1[] = {1, 2, 3};
int arr2[] = {1, 2};

void func( void )
{
    int a = sizeof( arr1 ) - sizeof (arr2);
    /*
        compliant;
        sizeof arr1, arr2 return the size of arrays
    */
    printf( a );
}