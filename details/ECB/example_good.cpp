#include <iostream>

int integer_divide(int a, int b) {
    if (b == 0) {
        throw "division by zero error";
    }
    else return (a/b);
}

int foo(int x, int y) {
    try {
        int z = integer_divide(x, y);
        std::cout << z << std::endl;
    }
    catch (const char* msg) {
    // non-empty catch body and return error
        std::cout << "division exception" << std::endl;
        return 1;
    }
    return 0;
}