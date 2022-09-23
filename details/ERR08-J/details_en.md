#### Abstract
The program is catching a NullPointerException. 

#### Explanation
A NullPointerException thrown at runtime indicates an underlying defect that must be fixed in the application code. Catching this exception (or others like RuntimeException, Exception or Throwable) adds more runtime performance overhead. Furthermore, when this happens, the program is likely to be in an unknown state and any continued execution will cause unexpected results.
