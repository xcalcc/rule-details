class A {
public:
  A(void) {}
  A(const A &b) {
    // ...
  }
  A(int) {}

  int Priv_int() const { return priv_int; }
private:
  static int priv_int;
};

void foo(int i)
{
  A varA;
  // local is dynamically created with local scope
  A *local = new A;
  
  if (varA.Priv_int() < 0) {
    throw(&varA);  // addr of local exposed (stack address)
  }
  else {
    throw(local);  // this could cause a heap object not properly deleted
  }
}
