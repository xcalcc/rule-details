#### Abstract
The program is using a variable before it has been initialized.

#### Explanation
Stack variables in C and C++ are not initialized by default. Non-static global variables are not guaranteed to be zeroed. Their initial values are determined by the values that happen to be in their location in memory at the time the function is invoked. Doing so will cause an unexpected program behavior.
