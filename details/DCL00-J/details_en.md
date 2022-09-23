#### Abstract
The program has class initialization that forms a cycle.

#### Explanation
Static field triggers the initialization of a class. When the static field is dependent on the initialization of another class, a cycle will be created.
