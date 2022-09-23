#### Abstract
The program has used random number generators (PRNG) that are not strong.

#### Explanation
Java API provides a PRNG in java.util.Random class which generates the same sequence when the same seed is used. For security sensitive programs, a more secure PRNG such as java.security.SecureRandom class should be used.
