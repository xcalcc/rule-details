#include <stdio.h>
#include <stdlib.h>

void use_rand(void) {
  int r;
  int i;

  // the same sequence will be printed every time this function is called
  for (i = 0; i < 10; i++) {
    r = rand();
    printf("Random %d is %d\n", i, r);
  }
  
}
