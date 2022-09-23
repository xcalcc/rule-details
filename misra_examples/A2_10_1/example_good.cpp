#include <stdio.h>

int i;

int func1 ( int j ) // compliant
{
    j ++;
    return 0;
}

namespace test1
{
    int t;
    namespace test2
    {
        int t; // compliant by exception
    }
}