#include <fenv.h>
#include <stdio.h>
#include <math.h>

void func() {
   // Do not use functions from fenv.h for exception handling
   sqrt(-1);
}