#include <stdio.h>

int main() {
    char c = 'a';
    int *ip = (int *) &c; // Down casting causes information loss
    char *cp = (char *) ip;

    // Below will fail on some implementations
    assert(cp == &c);
}
