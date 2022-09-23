#include <stdio.h>

/*
 this example does not guarantee the same result for
 different compilers with std C90 or before
*/

#define VERY_VERY_LONG_NAME2123456789312   10

#define VERY_VERY_LONG_NAME21234567893123  20

int main()
{
  int i;
  if (VERY_VERY_LONG_NAME2123456789312 == VERY_VERY_LONG_NAME21234567893123) {
    i = 0;
  }
  else {
    i = 1;
  }
  printf("i = %d\n", i);
}