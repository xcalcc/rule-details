#### Abstract
Free dynamically allocated memory if not needed.

#### Explanation
Before the lifetime of the last pointer ends, it must be matched by a call to free() with the pointer's value.
