#### Abstract
Test-and-set without proper locking may cause race condition

#### Explanation
Modifying the variables that are decided in the test-and-set operation in a thread may cause a race condition if such an operation is not protected by the lock.