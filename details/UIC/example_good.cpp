#include <stdio.h>

class Construct_Init
{
private:
    int a;
    int b;

public:
    // all variables in all constructors are
    // initialized
    Construct_Init()
    {
        a = 0;
        b = 0;
    };
    Construct_Init(int i)
    {
        a = i;
        b = 0;
    }
    Construct_Init(int i, int j)
    {
        a = i;
        b = j;
    }

    void CI_Run() { printf("%d:%d", a, b); }
};

int main(int argc, char **argv)
{
    Construct_Init ci;
    ci.CI_Run();
    Construct_Init ci1(1);
    ci1.CI_Run();
    Construct_Init ci2(1, 2);
    ci2.CI_Run();
}