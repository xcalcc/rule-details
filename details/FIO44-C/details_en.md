#### Abstract
Return value of fgetpos() not used when calling fsetpos() to set pointer

#### Explanation
The argument in fsetpos() must be a value obtained after an earlier successful call to fgetpos() on a stream associated with the same file. Using any other functions to get the position of the pointer might cause undefined behaviour.