#include <stdio.h>

class Construct_Init
{
private:
    int a;
    int b;

public:
    // all variables in all constructors are
    // initialized
    Construct_Init();
    Construct_Init(int i);
    Construct_Init(int i, int j);

    void CI_Run() { printf("%d:%d", a, b); }
};

Construct_Init::Construct_Init()
{
}

Construct_Init::Construct_Init(int i)
{
    a = i;
}

Construct_Init::Construct_Init(int i, int j)
{
    a = i;
    b = j;
}

int main(int argc, char **argv)
{
    Construct_Init ci;
    ci.CI_Run();
    Construct_Init ci1(1);
    ci1.CI_Run();
    Construct_Init ci2(1, 2);
    ci2.CI_Run();
}
