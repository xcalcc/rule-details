#### Abstract
The program has an exception construct with an empty catch block.

#### Explanation
Empty catch block effectively suppressed an exception from being correctly handled by another try block. The \"uncaught\" exception may cause unintended program behavior.
