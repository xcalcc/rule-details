#### Abstract
The program has passed untrusted data as input to Runtime.exec() method.

#### Explanation
Untrusted data passed to Runtime.exec() will expose the system to an argument injection attack. The string must be sanitized to get rid of characters such as spaces, double quotes, and '-'.
