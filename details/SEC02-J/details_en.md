#### Abstract
The program has security checks whose sources are possibly from an untrusted origin.

#### Explanation
Untrusted code may have been from many different sources. The check method could be bypassed through overriding. The checked object may be overridden also after the check. Even if the object is saved after passing the security check, the copy method itself may not be sufficient if the method is not thorough enough (such as shallow copy).
