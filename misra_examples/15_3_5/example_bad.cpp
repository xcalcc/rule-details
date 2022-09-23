
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
  virtual const char* test() {
    return "Derived";
  };
private:
  int d;
  
  void foo()
  {    
    try {
      // ...
      throw Derived();
      throw Base();
    }
    catch (Base b) {
      b.test();
      throw b;
    }
  }
};
