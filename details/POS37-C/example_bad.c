#include <stdio.h>
#include <unistd.h>

void func()
{
    // Permanently drop privileges
    if (setuid(getuid()) != 0) {
        // Handle error
    }
    
    // Check for failure of privilege relinquishmnet has to be done here
    // Else, attacker can regain elevated privileges    
}