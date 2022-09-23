 // ...

 // the following check alone is not sufficient. need to make sure privilege can be restored
 if (setuid(getuid()) != 0) {
 // Handle error
 }

 // check for failure to set uid when the caller is UID 0
 // failure to do this will result in a serious security risk
 if (setuid(0) != -1) {
 // privilege can be restored. Handle error
 }