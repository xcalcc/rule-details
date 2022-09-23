#include <stdio.h>

struct Books
{
    char    title[20];
    char    author[10];
    int     id[ ]; // flexible array menber
} book;