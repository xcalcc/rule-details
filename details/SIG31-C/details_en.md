#### Abstract
The program is accessing a shared variable or object inside a signal handler.

#### Explanation
Other than variables of type \"volatile sig_atomic_t\", accessing any other type of objects from a signal handler may cause a race condition resulting in an undefined behavior.
