#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    double complex complex_number = 1.1 + 1.0 * I;
    // floor of a complex number leads to undefined behaviour
    double complex result = floor(complex_number);
}
