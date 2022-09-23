#include <stdio.h>

#define NON_TRG_STR "NON-Trigraph string"

int foo()
{
  printf("This example uses %s", NON_TRG_STR); // trigraph is not used
  return 0;
}