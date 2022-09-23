#### Abstract
The program is using inappropriate string methods to process characters which may lead to validation checks that are bypassed or a memory leakage.

#### Explanation
When trying to construct a string of char type in C or C++ , we must declare the maximum length if it is not initialized. When trying to input more characters into the variable (i.e. from console) than the variable can handle, a buffer overflow will occur. A buffer overflow will expose programs to attacks.
