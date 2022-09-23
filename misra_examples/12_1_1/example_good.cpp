
class Base {
public:
  virtual void func_char();
  
  Base() {
    Base::func_char();   // dynamic, non-virtual call
  };
};


void foo(void)
{
  Base example;

  example.func_char();  //  
  return;
}
  
