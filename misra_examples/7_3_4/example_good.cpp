#include <iostream>

namespace T1
{
	int t{ 5 };
}

namespace T2
{
	int t{ 1 };
}

int func( void )
{   
    using T2::t; // using declaration is compliant
    std::cout << t;
    return 0;
}