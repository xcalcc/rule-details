#### Abstract
The program has called overridable methods in clone().

#### Explanation
A malicious subclass could override the methods in clone() causing insecure or unpredictable behavior. Also, trusted subclasses could modify cloned objects which are in the construction process such that the object being cloned will be in an inconsistent state.
