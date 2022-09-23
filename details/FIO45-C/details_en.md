#### Abstract
Race conditions while accessing files (time of check, time of use) may happen and should be avoided.

#### Explanation
In a shared file system, two or more processes may access the same file, causing a race condition. Attackers can change the file between two accesses or replace the file (symbolic or hard linked) with a different file.
