#include <iostream>
#include <cstdlib>

int foo()
{
  char s[] = "98";
  long num;

  num = atol(s);

  std::cout << "number in long = " << num << std::endl;
    
}