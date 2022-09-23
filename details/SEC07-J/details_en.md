#### Abstract
The program has a custom class loader and failed to call super.getPermission() method. 

#### Explanation
The program has a custom class loader to override the getPermission() method. The implementation should invoke the superclass's getPermission() to get the default system policy before assigning custom permission to the program. This way, both system wide security policies are also applied.
