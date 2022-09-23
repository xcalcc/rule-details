void func_call_sys(const char *in)
{
 // system() is called with a string \"in\" passed from outside of this function
 // There is no evidence that \"in\" has been sanitized
 // Sanitize input to system()
 // use full path name for directory for example
 sanitise(in); // e.g. for file or directory name, do not include \"../\" substring
 system(in);
}