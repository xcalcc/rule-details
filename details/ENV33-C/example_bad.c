void func_call_sys(const char *in)
{
 // system() is called with a string \"in\" passed from outside of this function
 // There is no evidence that \"in\" has been sanitized
 // for example, if \"in\" is the string \"rm *\"
 // executing the system() call could be devastating
 system(in);
}