#include <stdio.h>

#define VERY_VERY_LONG_NAME_FST 10

#define VERY_VERY_LONG_NAME_SEC 20 // compliant

int main()
{
  int i;
  if (VERY_VERY_LONG_NAME_FST == VERY_VERY_LONG_NAME_SEC) {
    i = 0;
  }
  else {
    i = 1;
  }
  printf("i = %d\n", i);
}