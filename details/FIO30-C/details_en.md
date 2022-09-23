#### Abstract
The program has a format specification that contains a parameter of char * type (aka string) with an untrusted source and is considered tainted.

#### Explanation
Formatted I/O functions can be tricked into overriding or reading the value of any arbitrary memory location. When the input source is untrusted it is better not to use format strings and related functions to perform I/O operation.
