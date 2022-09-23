#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void func() {

    #define MAX_STR_SZ 10   
    char str[MAX_STR_SZ];
    strncpy(str, "string", MAX_STR_SZ);
    
    strcpy(str, "string");
    printf("%s", str);
}