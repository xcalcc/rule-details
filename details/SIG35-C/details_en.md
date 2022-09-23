#### Abstract
Do not return from a computational exception signal handler

#### Explanation
Do not return from SIGFPE, SIGILL, SIGSEGV, SIGBUS, or any other implementation-defined value that corresponds to a computational exception. If a signal handler returns after being invoked as a result of a computation exception, then the behavior is undefined.