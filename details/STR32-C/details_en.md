#### Abstract
The program is calling a library function with a string parameter. That string may not be properly terminated.

#### Explanation
Library functions that operate on a string that is not null terminated can result in accessing memory outside of the string object. This in turn will cause an unexpected program behavior.
