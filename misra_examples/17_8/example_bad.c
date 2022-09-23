#include <stdio.h>

int param_0 =1;

void func(int param){
    // Modifying parameter can cause confusion
    param = param_0;
    printf("%d\n", param);
}