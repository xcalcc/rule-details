#### Abstract
The program is validating pathnames without first canonicalizing them.

#### Explanation
Pathnames may contain special characters that make validation difficult. Also, a pathname may be symbolic links or shadows which attackers could use to bypass security check. It is important to fully resolve/canonicalize a pathname before validation. 
