#### Abstract
The program should strip all code used for debugging that is not intended to be shipped or deployed with the application. 

#### Explanation
Although it is an acceptable practice to include \"main\" development, leaving that in production code could leave a backdoor entry point for an attacker. Methods that include \"main\" should be removed from production applications.
