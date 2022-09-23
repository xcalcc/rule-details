extern void prints(char *, char *);

// trigraph is used
char TRG_STR[] = "[??)"; // "??)" represents "]"

int foo()
{
  prints("This example uses %s", TRG_STR);
  return 0;
}