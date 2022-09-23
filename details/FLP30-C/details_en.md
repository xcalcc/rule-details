#### Abstract
Make sure precision is preserved when converting integers to floats

#### Explanation
Using floating-point variables for iteration is undefined behavior since certain 
compilers have different precision limits, so the times a program iterates may be different
depending on the compiler.