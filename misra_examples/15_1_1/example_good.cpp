#include <iostream>

using namespace std;

class MyException
{
  public:
    MyException ()
    {
      cout << "constructor does not cause exception" << endl; // compliant
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