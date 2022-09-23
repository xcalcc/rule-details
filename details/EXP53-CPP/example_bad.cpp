int assign(int* a)
{
 return *a; // dereference a
}

int main() {
 int a, b;
 b = assign(&a); // call assign with a uninitialized
 printf("value of b = %d\\", b);
 return 0;
}