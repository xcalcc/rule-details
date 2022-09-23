#### Abstract
The program has a function with non-void return, but that function has an execution path that will reach the exit without encountering a \"return\" statement.

#### Explanation
A value is expected to be returned upon calling this function, however, not all code paths return a value and may result in an undefined behavior.
