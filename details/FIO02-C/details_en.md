#### Abstract
Path and directory names from untrusted source should be canonicalized and validated.

#### Explanation
Path names, directory names and file names may contain characters that make validation difficult and inaccurate. Furthermore, any path name component can be a symbolic link, which further obscures the actual location or identity of a file. To simplify file name validation, it is recommended that names be translated into their canonical form. Canonicalizing file names makes it much easier to verify a path, directory, or file name by making it easier to compare names. Because the canonical form can vary between operating systems and file systems, it is best to use operating-system-specific mechanisms for canonicalization.
