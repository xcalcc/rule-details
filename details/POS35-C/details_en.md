#### Abstract
The program has called function lstat() to check the named file for symbolic linkage. Result of this check may not be valid when the file is later accessed.

#### Explanation
Checking that a file is a symbolic link suffers from time of call, time of use (TOCTOU) problem. In other words, when the file is finally opened for access, that the file is of symbolic link status may not be valid anymore.
