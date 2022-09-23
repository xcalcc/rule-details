#### Abstract
The program has called methods to grant permissions or a combination of permissions to code, and this could be dangerous.

#### Explanation
A combination of permissions granting code could be dangerous. For example, when RuntimePermission is applied to createClassLoader it can create a custom class loader and assign arbitrary permissions. ReflectPermission and suppressAccessChecks together will suppress all standard checks. 
