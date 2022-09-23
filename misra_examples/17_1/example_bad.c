#include <stdarg.h>

void func(va_list var_arg, ...) {
    double var;
    int a = 1;
    va_start ( var_arg, a);
    
    // Using va_list and va_arg can cause undefined behaviour
    var = va_arg(var_arg, double);

    // va_end not used
}