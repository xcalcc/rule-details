#### Abstract
The program is accessing memory through a pointer with a NULL value. This will cause a segmentation fault or unpredictable program behavior. This vulnerability is equivalent to EXP34-C

#### Explanation
On a system with memory protection, such as Linux, dereferencing a null pointer will cause a segmentation fault. For embedded systems, it will cause unpredicted program behavior. In Java, a null pointer dereference will trigger a null pointer exception.
