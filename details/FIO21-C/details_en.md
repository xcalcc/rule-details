#### Abstract
The program has created temporary files in shared directories but has no removal or access procedures to prevent user attacks into the shared directory.

#### Explanation
Process of creating temporary files is often used as a practice to transmit data from one process to another when it cannot reside in memory. If there is no clean up procedure for these files, or if the file name of these files is predictable, then it allows attackers to easily hijack this file. It can be fatal if the file holds sensitive information.
