#### Abstract
When a thread local's address has been saved, it can be called by its holder even after the thread has been terminated.

#### Explanation
Exposing address of a thread local variable can lead to unintended calls to illegal locks, or functions that are no longer valid. This results in non-deterministic behavior.