#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void func() {
    char *str;

    str = (char *) malloc(10);
    strcpy(str, "string");
    printf("%s", str);

    free(str);
}