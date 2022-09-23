#include <stdarg.h>
#include <stddef.h>

// passing in unsigned char causes the value to 
// undergo default argument promotions
// that leads to undefined behavior
void func(size_t num_vargs, ...) {
    va_list ap;
    va_start(ap, num_vargs);
    if (num_vargs > 0) {
        unsigned char c = va_arg(ap, unsigned char);
        // ...
    }
    va_end(ap);
}

void f(void) {
    unsigned char c = 0x12;
    func(1, c);
}