
class Base {
public:
  Base(void) {}
  Base(const Base &b) {}
  virtual const char* test() {
    return "Base";
  };

private:
  static int priv_int;
};


class Derived : public virtual Base {
public:
  Derived() {}
  //  Derived1(int) : Base(0) {}
  virtual const char* test() {
    return "Derived";
  };
  
  
  void foo()
  {
    Derived D1;
    
    try {
      // ...
      throw Derived();
      throw Base();
    }
    catch (Base &b) {
      b.test();
      throw b;
    }
    catch (Derived &d) {
      d.test();
      throw d;
    }
  }
};
