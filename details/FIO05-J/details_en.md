#### Abstract
The program is using wrap() or duplicate() methods in buffer class in the java.nio package. These buffers are exposed to untrusted code in the program.

#### Explanation
The methods will create a new Buffer object, backed by the given input array. Hence, the new Buffer object can be maliciously modified. It is important to use a read only Buffer or make sure the original buffer will not be modified. 
