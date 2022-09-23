class Base {
public:
  Base() {}
  Base(int i);
};


class Derived1 : public virtual Base {
public:
  Derived1() {}
  Derived1(int) : Base(0) {}
}; 

class Derived2 : public virtual Base {
public:
  Derived2() {}
  Derived2(int) : Base(1) {}
}; 


class Hier : public Derived1, public Derived2 {
  //  Hier()    {}
  Hier(int) {} // constructor used is ambiguous w.r.t. Derived1 or Derived2

};