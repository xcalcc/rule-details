#include <stdio.h>

int i = 0;
int * ip1 = &i;
int ** ip2 = &ip1;
// more than two levels of pointer nesting should be avoided
int ***ip3 = &ip2;
int ****ip4 = &ip3;
int *****ip5 = &ip4;