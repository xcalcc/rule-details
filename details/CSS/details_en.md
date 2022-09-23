#### Abstract
The program has a call sequence that causes the runtime stack size to exceed the set limit.

#### Explanation
When function A calls another function B, the parameters passed to the called function, and the return value from the called function to the caller function will be placed on the execution stack. Local variables will also be placed on the execution stack.
