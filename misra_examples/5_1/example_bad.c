#include <stdio.h>

int main()
{
    // the first 31 characters are not distinct
    int this_is_a_non_compliant_example_a = 1;
    int this_is_a_non_compliant_example_b = 2; 
    int a;
    a = this_is_a_non_compliant_example_a + this_is_a_non_compliant_example_b;
    printf("%d\n",a);
    return 0;
} 