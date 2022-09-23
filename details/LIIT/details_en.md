#### Abstract
Calling spinlock initialization in a thread may result the thread being initialized multiple times.

#### Explanation
A thread should not be initialized multiple times, directly or indirectly. Doing so will cause starvation for other threads.