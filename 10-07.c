#include <stdio.h>

void func1()
{
    printf("There is nothing to return in a void function.\n");
}

int func2()
{
    return 100;
}

void main()
{
    int a;

    func1();

    a = func2();
    printf("The value returned from the int function ==> %d\n", a);
}