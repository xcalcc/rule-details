#include <stdio.h>

int main(int argc, char *argv[])
{
 int var_to_hold_content; // the variable where printf will store content of an address
 if (argc > 2) {
 scanf(argv[1]); // get a string from stdin (user input)
 printf(argv[1]); // user can read any address to a variable using a format specification
 }
}