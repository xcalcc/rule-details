#### Abstract
Thread spin_lock has been initialized more than once before deinitialized.

#### Explanation
After initializing a thread, it should be de-initialized before initialization is called again. Failure to doing so will cause starvation for other threads.