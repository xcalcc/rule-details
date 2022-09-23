#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int arr[] = { 1, 2, 3, 4, 5 };

void func () {
   int *item;
   int key = 3;

   // use bsearch to compare and find values of 3 in the array arr
   item = (int*) bsearch (&key, arr, 5, sizeof (int), cmpfunc);
   if( item != NULL ) {
      printf("Found item");
   } else {
      printf("Item is not in the array");
   }
}