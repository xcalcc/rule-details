#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void use_rand(void) {
  int r;
  int i;
  time_t t;

  // seeds the rand()
  srand((unsigned) time(&t));
  
  // random is a better pseudorandom number generator
  for (i = 0; i < 10; i++) {
    r = random();
    printf("Random %d is %d\n", i, r);
  }
  
}
