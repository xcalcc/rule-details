#### Abstract
The paired lock and unlock mutex program idiom is broken, missing one or the other counterpart

#### Explanation
A thread must enter or leave a mutex region through proper invokation of the corresponding lock or unlock functions. Failure to doing so will cause starvation for other threads.