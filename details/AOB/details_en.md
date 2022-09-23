#### Abstract
The program is accessing data outside (i.e. before or after) the declared boundary of the intended buffer.

#### Explanation
Typically, this can allow attackers to cause a crash during program execution. A crash can occur when the code reads sensitive information from other memory locations or causable amount of data and assumes that a sentinel exists to stop the read operation, such as a NUL in a string. The expected sentinel might not be located in the out-of-bounds memory, causing excessive data to be read, leading to a segmentation fault or a buffer overflow. The software may modify an index or perform pointer arithmetic that references a memory location that is outside of the boundaries of the buffer. A subsequent read operation then produces undefined or unexpected results.
