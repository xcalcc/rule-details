#include <iostream>
 
using namespace std;

class MyException
{
  public:
    MyException ()
    {
      throw "Exception thrown when constructing an exception object"; // non-compliant
    }
};

void func ( int n ) throw (int, MyException)
{
  if ( n == 1 )
  {
    throw 1;
  }
  else
  {
    throw MyException();
  }
}

int main( void )
{
  try
  {
    func(2);
  }

  catch ( int n )
  {
    cout << "catch int ..." << endl;
  }
  catch (MyException)
  {
    cout << "catch MyException ..." << endl;
  }
}