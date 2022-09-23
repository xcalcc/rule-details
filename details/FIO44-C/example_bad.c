#include <stdio.h>
#include <string.h>

void func() 
{
    FILE *file;
    fpos_t position;

    file = fopen("somefile.txt", "w+");

    memset(&position, 0, sizeof(position)); // Setting the pointer to start using other way
    fputs("Content of text", file); 

    fsetpos(file, &position); // Setting position using other method other than fgetpos() cause undefined behaviour
    fputs("Replace content from start of file", file);

    fclose(file);

    return;
}
