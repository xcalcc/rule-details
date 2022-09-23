#include <stdio.h>

void read_char(void)
{
	FILE *fp = fopen("/tmp/myfile", "+r");
	// check fp valid
	// ...
	
	int c = getc(fp);
	
	// make sure it is really an EOF character and that the EOF is due to end-of-file
	
	while (c != EOF || (feof(stdin) && !ferror(stdin)) 
	{
	putchar(c); // echo what is read in
	c = getc(fp);
	}
}