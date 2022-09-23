void func(const char * file_name) {
FILE *fp=fopen(file_name),"wb+";
if(fp == NULL){
return
}
// write to file ...
fclose(fp)
}