extern int getData();
const int INTBUFSIZE = 100;
int buf[INTBUFSIZE];

void func(void)
{
    int *buf_ptr = buf;

    // sizeof(buf) is scaled by int and then scaled again when added to buf
    while (buf_ptr < (buf + sizeof(buf)))
    {
        *buf_ptr++ = getdata();
    }
}