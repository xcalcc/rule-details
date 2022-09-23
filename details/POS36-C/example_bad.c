#include <stdio.h>
#include <unistd.h>

void func(){
    int uid_stat = setuid(getuid());
    int gid_stat = setgid(getfid());

    // Possible to regain group privileges because of incorrect order
    // Vulnerability allowing execution of arbitrary code
}