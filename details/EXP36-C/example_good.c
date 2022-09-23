#include <stdio.h>

int main() {
    char c = 'a';
    int i = c; // Storing the char value as type int will lead to the proper alignment of the pointer's value
    int *ip = &i;

    // Will always work since pointer's value is properly aligned
    assert(ip == &i);
}