#### Abstract
The function returns the address of a stack variable and will cause unintended program behavior.

#### Explanation
Because local variables are allocated to the stack, when a function returns to the caller, the callee's stack address is no longer valid. A subsequent function call is likely to re-use this same stack address, thereby overwriting the previous value.
