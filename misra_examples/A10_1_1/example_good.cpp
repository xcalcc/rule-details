class Base1 
{
    public:
        virtual void func1() = 0;
        virtual void func2() = 0;
};

class Base2
{
    public:
        void func3(){}
        void func4(){}
};

class Base3
{
    public:
        virtual void func5() = 0;
        virtual void func6() = 0;
};


// compliant
// Only Base2 is not interface class
class Derived1 : public Base1,
                 public Base2
{};

// compliant
// Both Base1 and Base3 are interface classes
class Derived2 : public Base1,
                 public Base3
{};