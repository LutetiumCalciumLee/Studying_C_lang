#include<stdio.h>

void func1()
{
	printf("A function with a void return type does not return a value.\n");
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
	printf("The value returned by an int function ==> %d\n", a);
}