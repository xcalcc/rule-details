#### Abstract
The program doesn't properly seed the pseudorandom number generator. It has used a constant seed OR it has used a seed that is predictable creating the same sequence over and over.

#### Explanation
When calling a pseudorandom number generator (PRNG) with the same initial state, like using the same seed, it will always generate the exact same sequence of numbers. An attacker will be able to easily predict the sequence of numbers and cause security issues.
