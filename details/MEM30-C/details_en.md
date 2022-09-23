#### Abstract
The program is accessing memory that has been freed.

#### Explanation
Use after free is a variation of dangling pointer reference. It typically occurs when the pointer is not updated after the memory object it points to has been freed. This pointer will be pointing to inappropriate memory leading to unauthorized access when the pointer is used.
