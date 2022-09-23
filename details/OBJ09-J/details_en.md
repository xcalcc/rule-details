#### Abstract
Comparing class names may cause mix and match attacks.

#### Explanation
Two classes are the same class only if they have the same qualified names. Classes with the same name may have different package names. Also distinct class loaders (or different instances of the class loader) will result in different classes with the same fully qualified names. 
