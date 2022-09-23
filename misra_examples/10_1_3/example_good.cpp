
class Base {};

class Derived1 : public virtual Base {}; // Base is virtual

class Derived2 : public virtual Base {}; // Base virtual

// This hierarchy has two derived class from virtual base class
class V_and_V : public Derived1, public Derived2 { /* code here */ };
  
