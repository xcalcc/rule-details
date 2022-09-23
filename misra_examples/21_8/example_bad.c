#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char* ptr_h;
  char h[64];

  ptr_h = getenv("HOME");  // value of HOME could be > 64, need size guard
  if (ptr_h != NULL) {
    // ...
  }
  return 0;
}