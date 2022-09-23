const int **ipp;
int *ip;
const int i = 1;

void func(void)
{
    ipp = &ip; /* Modified constant*/
    *ipp = &i; 
    *ip = 0;   /* Modifies constant i, changes from 1 to 0 */
}