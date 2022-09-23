#include <stdio.h>

int & func ( int & test )
{
    int & t = test;
    return t;
}