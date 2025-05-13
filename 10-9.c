#include<stdio.h>

void func1(int* a)
{
	*a = *a + 1;
	printf("The received value a ==> %d\n", *a);
}

void main()
{
	int a = 10;

	func1(&a);
	printf("Value a after executing func1( ) ==> %d\n", a);
}