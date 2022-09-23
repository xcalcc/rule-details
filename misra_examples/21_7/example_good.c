#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func() {
   float val;
   char str[10];
   
   strcpy(str, "914");
   val = 914.000; //Do not use atof, atol, atoll, atoi
   printf("String value = %s, Float value = %f\n", str, val);
}