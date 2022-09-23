#### Abstract
The program is calling one of the printf families with a number (or type) of parameter(s) used differently from format string declaration.

#### Explanation
In a printf (or family with this type of system call), the format string specifier is inconsistent with the actual parameters or, that specifier has unsupported characters in the format string. When the actual parameters being passed are different, what is printed out will be unpredictable.
