#include <iostream>

namespace T1
{
	int t{ 5 };
}

namespace T2
{
	int t{ 1 };
}

/* This example may cause compilation error;
using directives raises confusion for 
"std::cout << t" of which t to refer to*/
int func( void )
{   
    using namespace T1; 
    using namespace T2;
    std::cout << t;
    return 0;
}