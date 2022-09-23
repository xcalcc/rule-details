#include <stdint.h>
#include <stdbool.h>

void func ( void )
{
    short short_a;
    long int b;
    short_a = b;            // b assigned to narrower essential type
    uint16_t c = 0.5f;    // float to unsigned
    bool d = 1;             // signed to boolean
    char e = 3;             // signed to char
    uint32_t f = 'test';  // char to unsigned
    uint16_t g = 5;       // signed to unsigned
}