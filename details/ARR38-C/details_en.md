#### Abstract
Make sure library functions don't form invalid pointers

#### Explanation
Certain functions that make changes to arrays or objects take at least two arguments.
Therefore, supplying invalid or wrong arguments to such functions might form an 
incorrect pointer resulting in undefined pointer.