#### Abstract
The program is returning references to mutable class members that are declared private.

#### Explanation
Returning reference to a private mutable class member is breaking the encapsulation and also makes a private object available that can be manipulated by an untrusted calling method.
