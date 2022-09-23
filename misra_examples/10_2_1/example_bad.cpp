class Base {
public:
  void func(char) {};
};

class Derived : public Base {
public:
  void func(int) {};
};


int foo(void)
{
  int   i;
  char ch;
  Derived example;

  example.func(i);
  example.func(ch);  // func(char) in Base is not visible 
  
}