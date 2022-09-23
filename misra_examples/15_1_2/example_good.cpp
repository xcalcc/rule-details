#include <iostream>
 
using namespace std;

class Str {
public:
  int Report()    const { cout << "Str error "; return 0; }
  void NullReport(void) { cout << "Null pointer"; }  
  
public:
  Str() {} 
  void setLength( double len );
  int  Length( void ) {
    if (length <= 0)
      throw Report();
    else
      return length;
  }
 
private:
  int length;
};


int main(class Str *p)
{
  // ...
  
  try {
    p->Length();  // Legth() fully handle throw
    // ...
  }
  catch (int m) {
    if (m == 0)
      p->NullReport();
    // ...
  }
  catch (...) {
    // ...
  }

  // ..
}
