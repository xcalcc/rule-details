#### Abstract
The program is calling non-asynchronous safe functions inside signal handlers.

#### Explanation
The table of asynchronous safe functions are functions that can be called safely without side effects by a signal handler. Non-reentrant functions are typically not safe. Users can check the system user manual for a full list of all safe functions to use.
