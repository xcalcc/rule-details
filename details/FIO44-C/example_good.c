#include <stdio.h>

void func() 
{
    FILE *file;
    fpos_t position;

    file = fopen("somefile.txt", "w+");

    fgetpos(file, &position); // Store the position of the start of the file
    fputs("Content of text", file);

    fsetpos(file, &position); // Set the current position to be the start of file from fgetpos() return value
    fputs("Replace content from start of file", file);
    
    fclose(file);

    return;
}
