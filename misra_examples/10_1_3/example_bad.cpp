class Base {};

class Derived1 : public virtual Base {};

class Derived2 : public Base { };


class V_and_nonV : public Derived1, public Derived2 { };