#include <stdint.h>

void func( int arr1[ 5 ], int arr2[ 3 ] )
{
    int a = sizeof( arr1 ) - sizeof (arr2);
    /*
        non-compliant;
        arr1, arr2 have type int *;
        sizeof arr1, arr2 do not return the size of array
    */
    printf( a );
}