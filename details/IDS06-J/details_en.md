#### Abstract
The program has format strings that includes unsanitized user input.

#### Explanation
Unsanitized input from an untrusted source should not be incorporated into format strings. This could result in information leakage or allow denial of service attacks.