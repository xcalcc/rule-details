#### Abstract
The program has called putenv() with an argument that points to a local object.

#### Explanation
The system that calls putenv() will save the argument (which is a pointer to the intended string) into the environment array. When the function returns to the caller, the local object with the environment string may be overwritten. This will cause an unpredictable program behavior.
