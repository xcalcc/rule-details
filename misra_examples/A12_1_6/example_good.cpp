#include <iostream>

class Base {
  
public:
  // destructor non-virtual
  ~Base(void) { std::cout << "Base dtor called\n"; }
};

class Derived : public Base {
  
public:
    using Base::Base;
}; 


int main()
{
    Base* b = new Derived;
    delete b;
}