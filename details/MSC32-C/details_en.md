#### Abstract
The program is using a pseudo random number generator with seeding (initial state) that will produce a deterministic sequence of numbers.

#### Explanation
A properly seeded PRNG will generate a different number sequence each time it runs (e.g. call srandom() before invoking the random function). This prevents potential attackers to predict the number sequence generated. Alternatively, use random number generators that cannot be seeded.
