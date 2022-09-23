extern int getData();
const int INTBUFSIZE = 100;
int buf[INTBUFSIZE];

void func(void)
{
    int *buf_ptr = buf;

    // INTBUFSIZE is unscaled so valid
    while (buf_ptr < (buf + INTBUFSIZE))
    {
        *buf_ptr++ = getdata();
    }
}