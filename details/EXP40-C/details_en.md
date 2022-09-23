#### Abstract
Never modify constant objects

#### Explanation
Certain compiler implementations allow for const objects to be modified without warning.  Doing this is a bad practice and can cause undefined behavior.