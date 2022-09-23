#### Abstract
The program has called function readlink() and the number of characters written on the buffer (second argument) is not enough to hold a valid string.

#### Explanation
The number of characters written by readlink() may overflow the buffer specified in the second parameter. Also one needs to ensure that the end of the string is null terminated.
