#### Abstract
The program is using a return value of file read (such as getchar(), getc(), getwc(),..) to check for EOF/WEOF as an end of file read operation.

#### Explanation
The function that read characters from a file returned an int type. Directly comparing the character read with EOF/WEOF may cause an unexpected result because EOF and WEOF are implementation defined.
