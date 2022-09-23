#### Abstract
The program has an execution path that might reach the exit point of a non-void function without going through a \"return\" statement.

#### Explanation
When the program exits that function on an execution path without a return statement, then the return value will be non-deterministic causing an unexpected program behavior. If the function happens to be \"main\", or if the function is marked with \"no-return\" attribute, then there is no problem.
