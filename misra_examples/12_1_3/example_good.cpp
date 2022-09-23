class Base {
public:
  Base() {}
  explicit Base(int i);
};


class Derived1 : public virtual Base {
public:
  Derived1() {} 
  explicit Derived1(int) : Base(0) {}    // make explicit
}; 

class Derived2 : public virtual Base {
public:
  Derived2() {}
  explicit Derived2(int) : Base(1) {}    // make explicit
}; 


class Hier : public Derived1, public Derived2 {
  explicit Hier(int) : Derived1(2), Derived2(), Base() {}  // make explicit

};