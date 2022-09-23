#### Abstract
The program has called some POSIX library function but failed to check and handle the return error condition.

#### Explanation
Each POSIX library has a well defined error return. Failure to check the return value for an indication of an error condition and handle the error appropriately will lead to an unexpected program behavior.
