#include <stdlib.h>

void f()
{

  // code
  // ...
  
  exit(0);
}


int main(int argc, char *argv[])
{
  try {
    
    // code with no call to f()

  }
  catch (int m) {}

  // No catch-all handler
  
  return 0;
}