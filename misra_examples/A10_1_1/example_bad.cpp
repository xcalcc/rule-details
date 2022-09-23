class Base1
{
    public:
        void func1(){}
};

class Base2
{
    public:
        void func2(){}
};

// Non-compliant
// Base1 and Base2 are both not interface classes
class Derived : public Base1,
                public Base2
{};