#### Abstract
Never add or subtract a scaled integer to a pointer

#### Explanation
Doing this is invalid since it may yield a pointer that incorrectly points
to an element within or beyond the end of an array