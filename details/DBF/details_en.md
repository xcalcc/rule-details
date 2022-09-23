#### Abstract
The program has freed some resources (e.g. heap memory, I/O stream object, etc.) multiple times.

#### Explanation
The program has called functions such as free(), close() multiple times to release the same resource object. This could cause system inconsistencies such as corruption of the system's heap management data strutures or I/O stream subclasses. This in turn may allow malicious users to access arbitrary memory or cause an IOException.

