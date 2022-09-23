#### Abstract
The program did not perform a proper cleanup when the program terminated.

#### Explanation
When irrecoverable errors are detected, it is common to quickly shut down the system and allow the operator to start over in a determinate state. This should include cleanup of the external resources. Failure to do so may leave important and sensitive data behind in the system.
