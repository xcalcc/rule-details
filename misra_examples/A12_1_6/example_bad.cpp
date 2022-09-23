#include <cstdint>
#include <iostream>

class Base {
  
public:
  // destructor non-virtual
  ~Base(void) { std::cout << "Base dtor called\n"; }
  explicit Base(std::int32_t x) : Base(x+1) {}
};

class Derived : public Base {
  
public:

  ~Derived(void)  { std::cout<< "Derived dtor called\n"; }
  explicit Derived(std::int32_t) : Base(x-1) {}
}; 


int main()
{
    Base* b = new Derived;
    delete b;
}

// bad example from document
class A  
{
    public: 
        A(std::int32_t x, std::int32_t y) : x(x + 8), y(y) {}
        explicit A(std::int32_t x) : A(x, 0) {}

        private:
            std::int32_t x;
            std::int32_t y;
};


class B : public A
{
    public:
        B(std::int32_t x, std::int32_t y) : A(x, y) {}
        explicit B(std::int32_t x) : A(x) {}
}