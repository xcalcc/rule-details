#include <stdio.h>
#include <time.h>
 
void func (){
   // Using time and date function can lead to undefined behaviour
   printf("%ld", time(NULL));
}