#### Abstract
Address of a spinlock variable has escaped and may cause deadlock situation

#### Explanation
When the address of a spinlock variable is exposed to outside of a thread, the thread may not be properly unlock resulting in possible deadlock situation.