#include <typeinfo>

class Base {
public:
  virtual void func_char();
  
  Base() {
    func_char();   // dynamic, virtual call to a virtual function
    typeid(Base);  // dynamic typeid on a class with virtual function
  };
};


void foo(void)
{
  Base example;

  example.func_char();  //  
  return;
}
  
