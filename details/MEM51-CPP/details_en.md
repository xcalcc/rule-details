#### Abstract
The program has allocated heap memory but failed to free that piece of memory.

#### Explanation
Heap memory has been allocated and the allocated memory address is stored in a variable of reference (pointer) type. That heap memory has never been released after its lifetime has effectively ended and its corresponding reference still points to that memory space. This could result in sensitive data leakage or unexpected program behavior such as denial of service.
