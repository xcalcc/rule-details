#include <stdio.h>

int main()
{
    // the first 31 characters are distinct
    int a_non_compliant_example_a = 1;
    int a_non_compliant_example_b = 2; 
    int a;
    a = a_non_compliant_example_a + a_non_compliant_example_b;
    printf("%d\n",a);
    return 0;
} 