#include <stdio.h>

int func ( int x )
{
    for ( ; x < 5; x++){
        printf("less than five");
        return 0;
    }
    // control may reach end of function without returning
}

int main()
{
    func(10); // undefined behaviour
    return 0;
}