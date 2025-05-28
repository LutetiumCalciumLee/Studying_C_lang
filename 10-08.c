#include <stdio.h>

void func1(int a)
{
    a = a + 1;
    printf("The received a ==> %d\n", a);
}

void main()
{
    int a = 10;

    func1(a);
    printf("After executing func1(), a ==> %d\n", a);
}