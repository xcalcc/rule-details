#### Abstract
Do not rely on side effects for sizeof, _Alignof, _Generic functions

#### Explanation
When using these operators, the side effect may not be effective and also implementation defined for different compilers, 
leading to undesired results