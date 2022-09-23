#### Abstract
Ensure that the destination storage of a string is sufficiently large that it includes the terminating null.

#### Explanation
A string is terminated by the null character and should be part of the string size/length. If the storage for the string is not sufficiently large enough, it will cause a buffer overflow or other spurious errors.
