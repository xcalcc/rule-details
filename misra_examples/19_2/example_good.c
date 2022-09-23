#include <stdio.h>
#include <string.h>

struct Foo {
    int i;
    float f;
    char str[10];
};

void func() {
    struct Foo data;

    data.i = 5;
    data.f = 10.5;
    strcpy(data.str, "string");

    // Use struct instead of union to keep everything
    printf("%d\n", data.i);
    printf("%f\n", data.f);
    printf("%s\n", data.str);
}