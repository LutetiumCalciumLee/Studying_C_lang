#include <stdio.h>

int a = 100;

void func1()
{
    int a = 200;
    printf("In func1(), the value of a ==> %d\n", a);
}

void main()
{
    func1();
    printf("In main(), the value of a ==> %d\n", a);
}