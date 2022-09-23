
class Base {
public:
  Base() {}
  void func_char(char) {};
};

class Derived : public Base {
public:
  Derived() : Base() {}
  void func_int(int) {};
};


int foo(void)
{
  int   i;
  char ch;
  Derived example;

  example.func_int(i);

  example.func_char(ch);  // func(char) in Base is not visible

  return i;  
}
  
