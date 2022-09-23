#include <stdlib.h>

class X {
  
public:
  X() { }  // constructor that does not throw
  void setLen( double len );
  int check_and_handle_error(int) {
    if (len < 0)
      throw 0;
    return len;
  }  
private:
  int  len;
};

void f()
{
  X local_x;
  int i;
  
  // code
  // ...

  // where check_and_error() resides inside main
  // such that all exceptions are caught
  i = local_x.check_and_handle_error(0);
  // ...
}


int main(int argc, char *argv[])
{
  try {
    
    // code can call f() which may throw exception
    // ...
   
  }
  catch (int m) { }
  catch( ... )
  {
    // handler all unexpected exceptions
  }
  
  return 0;
}