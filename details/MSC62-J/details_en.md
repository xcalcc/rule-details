#### Abstract
Storing passwords in plain text may cause these passwords to be exposed in various ways. It is recommended to use a hash function that is computationally feasible but its decoding is not computationally feasible. Users can use the hash value to test whether the passwords are equivalent.

#### Explanation
Passwords should not be stored in clear text. To avoid exposure of them, they are typically stored in hash functions so that direct comparison is possible without requiring expensive encryption algorithms.
