#include <stdio.h>
#include <stdbool.h>

int test( void )
{
  return 0;
}

int func(int x, int y)
{
  int ret_var;
  ret_var = 1;
  bool bool_var;

  if ( ( ret_var == 1 ) || ( bool_var = true ) )
  {
    // non-compliant
  }

  if ( ( ret_var = test() ) > 1 )
  {
    // non-compliant
  }

  while (0) {
    // ...
    if (x = 0) {  // typical typo interpreted as an assignment
      ret_var = x = y; // non-compliant
    }
  }
  return ret_var;
}