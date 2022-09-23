#### Abstract
Correct order of privilege revocation is not maintained in the program.

#### Explanation
setgid() must be run with superuser privileges, whereas setuid() will leave the effective user ID as nonzero. It is possible to regain group privileges with incorrect relinquishment order. Vulnerability might occur as attacker is able to regain the original group privileges. Hence, the order of setgid() and setuid() must be properly maintained, i.e. setgid() first.