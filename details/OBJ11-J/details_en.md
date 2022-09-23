#### Abstract
Constructors throwing exceptions could leave the object in a partially initialized state.

#### Explanation
During objection construction, the object is in a partially initialized state. Throwing exceptions during construction could leave the object in an unstable state.
