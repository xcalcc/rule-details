#include <stdio.h>
#include <stdlib.h>

int arr[] = { 1, 2, 3, 4, 5 };

void func () {
   int key = 3;

   // Use other method other than bsearch for searching element in an array
   for (int i = 0; i < sizeof(arr) / 4; i++) {
      if (arr[i] == key) {
         printf("Item found");
         break;
      }
   }
}