#### Abstract
The program is calling fgets() or fgetws() and assuming the string returned is a non-empty string.

#### Explanation
The two functions may return a null string (e.g. the file may be a binary file).
