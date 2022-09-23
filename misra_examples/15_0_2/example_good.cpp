
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
  
  if (varA.Priv_int() == 0) {
    throw(varA);    // varA is not address
  }
  else {
    int l = local->Priv_int();
    delete local;
    throw(l); // return value copy of local's content, no heap address exposed
  }
}
