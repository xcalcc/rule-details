#### Abstract
Program fails to manage the catch handlers for exceptions in the correct order after a try statement. The current order is from least derived(more general) to most derived(more specific).
 
#### Explanation
Catch handlers go in order of declaration after a try statement. The correct order should be from the most derived to the least derived, from the most specific to the least specific.
If the catch starts from the least derived which may possibly be a problem caught from the most derived. This way, the catch handler for the most derived will never be executed, and that behaviour is not desirable.
