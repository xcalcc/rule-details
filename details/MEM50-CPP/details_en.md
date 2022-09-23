#### Abstract
The program has referenced memory after it has been freed. It can cause the program to crash or an unexpected program behavior.

#### Explanation
Use after free is a variation of dangling pointer reference. It typically occurs when the pointer is not updated after the memory object it points to has been freed. This pointer will be pointing to inappropriate memory leading to unauthorized access when the pointer is used.
