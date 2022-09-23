#include <stdio.h>

void bar_c(void* ptr)
{
    int* dest = (int*)ptr;
    int data = (*dest);
    int i;
    int Buffer[10] = { 0 };
    if(data >= 0)
      {
         Buffer[data] = 1;
         for(i=0; i<10; i++)
         {
             printf("%d", Buffer[i]);
         }
     }
 }

 void foo_v()
 {
     int data;
     data = -1;
     fscanf(stdin, "%d", &data); // this can easily cause array out of bound
     bar_c(&data);
 } 