int **ipp;
int *ip;
int i = 1;

void func(void)
{
    ipp = &ip; 
    *ipp = &i; 
    *ip = 0;   
}