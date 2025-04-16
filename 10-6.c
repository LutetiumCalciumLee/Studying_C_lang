#include<stdio.h>

int a = 100;

void func1()
{
	int a = 200;

	printf("Value of a in func1() ==> %d\n",a);
}

void main()
{
	func1();
	printf("Value of a in main() ==> %d\n", a);
}