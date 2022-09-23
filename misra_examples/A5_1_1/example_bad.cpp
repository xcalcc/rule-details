#include <stdio.h>
#include <stdint.h>
#include <iostream>

void function( void )
{
  for (int32_t i = 0; i < 100; i++)  // non-compliant
    {
      printf("magic number for 100"); // compliant by exception
      std::cout << "magic number" << i << '\n'; // compliant by exception
    }
}