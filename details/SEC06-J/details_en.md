#### Abstract
The program is using the default automatic signature verifier provided by the URLClassLoader and java.util.jar.

#### Explanation
Using these packages as default automatic signature verification is not sufficient when the signature is used for privilege elevation purposes. It only performs an integrity check. Also it only uses a public key which may have been maliciously modified for authentication of loaded classes.
