#include <string.h>

extern int Both_Macro_and_Var_name(int, int);
 
// this example will get compilation error
#define Both_Macro_and_Var_name(a, b) ((a) * (b))

int foo(int j) {
  int i = 5;
  i = Both_Macro_and_Var_name(i, j);
  return i;
}