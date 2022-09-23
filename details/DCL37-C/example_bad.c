#include <stddef.h>

// Using underscore as first character is a reserved identifier
size_t _limit = 100;

int func(int val)
{
    return val < _limit ? val : _limit;
}