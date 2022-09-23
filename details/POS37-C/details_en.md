#### Abstract
The program has one of the get/set uid/euid set of functions which manipulates user id privileges. The result of calling such functions is not checked which will cause the program's privilege to be in an unexpected state.

#### Explanation
Privilege capabilities are implementation defined. To ensure that the privileges are set and relinquished as expected, it is important to check the error conditions on return. Failure to do this may result in the program being run with root permission.
