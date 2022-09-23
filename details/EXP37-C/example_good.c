#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    double complex complex_number = 1.0 + 1.0 * I;
    // converting the complex number into a real number means that the parameter for
    // the floor() function is acceptable
    double real_number = creal(complex_number);
    double complex result = floor(real_number);
}