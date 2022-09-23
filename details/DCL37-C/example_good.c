#include <stddef.h>;

// No reserved identifier used
size_t limit = 100;

int func(int val)
{
    return val < limit ? val : limit;
}