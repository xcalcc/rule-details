#### Abstract
The program is calling the C standard system() function. When not properly protected, it could lead to various exploitations.

#### Explanation
The program is calling the system() function where the parameter is a character string. Such a string must be properly protected (examples: sanitized string, normalized path). Failure to do so will cause arbitrary program execution, privilege elevation or other unpredictable behavior.

