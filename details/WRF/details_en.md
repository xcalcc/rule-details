#### Abstract
The program is performing a write operation to a file that is available for read only

#### Explanation
When the file that is opened for read and later then written upon, the fwrite will report an error. If the result of fwrite is not checked, the program will continue and the file may not be updated as expected.
