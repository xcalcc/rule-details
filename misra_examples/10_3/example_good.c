#include <stdint.h>
#include <stdbool.h>

void func ( void )
{
    short short_a;
    int b;              // b declared as int for illustration
    b = short_a;        // short_a assigned to wider essential type object
    uint16_t c = 0;   // compliant by exception
    bool d = false;     // compliant
    uint16_t e = 5;   // compliant by exception
    char f = "f_char";  // char to char
}