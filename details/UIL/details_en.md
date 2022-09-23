#### Abstract
The lock has not been initialized when spin_lock was called.

#### Explanation
Resource alloation is required to use a spin lock, it also needed to be initialized to an unlock state. Failure to do so will lead to non-determinstic system behavior