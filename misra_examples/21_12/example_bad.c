#include <fenv.h>
#include <stdio.h>
#include <math.h>

void func() {
   // Using exception handlinf features can cause undefined behaviour
   feclearexcept(FE_ALL_EXCEPT);
   
   sqrt(-1);

   if (fetestexcept(FE_INVALID)) {
      printf("FE_INVALID casued by sqrt(-1");
   }
}