#### Abstract
The program has used malloc family of functions to allocate memory that is smaller than the memory required by the program.

#### Explanation
The parameter corresponding to size arguments to the malloc functions should have sufficient range to represent the size of objects to be stored. Failure to do so will cause a buffer overflow leading to an unexpected program behavior.
