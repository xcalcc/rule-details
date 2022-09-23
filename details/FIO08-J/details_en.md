#### Abstract
The program doesn't distinguish between characters read and end of the stream indicator by the read() method.

#### Explanation
When reading byte data from stream with InputStream.read() and Reader.read(), end of stream is indicated with a 32 bit value of -1. Proper checking of end of stream must be done before conversion to a byte/char.
