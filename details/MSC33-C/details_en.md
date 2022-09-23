#### Abstract
The program is calling asctime() function, however the input parameter for that function is from an untrusted source.

#### Explanation
The function asctime() does not validate the value or range of its input parameter. The subsequent use of the result from this function may cause a buffer overflow and other security violations when trying to print to a string.
