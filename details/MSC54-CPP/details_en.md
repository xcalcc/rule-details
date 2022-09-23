#### Abstract
The signal handler function in the program is not a plain old function. The particular signal handler function uses pure C++ linkage and no linkage with C. 

#### Explanation
POF or 'Plain Old Function' is a function that uses a feature on the common subset between C and C++ language. All signal handlers declared in a C++ source code must have a C linkage, otherwise it may cause an undefined behaviour.
