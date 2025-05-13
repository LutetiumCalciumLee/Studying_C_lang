#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a,b,c;
	int result;

	printf("Enter the 1st value to calculate. --> ");
	scanf("%d", &a);

	printf("<1> Addition, <2> Subtraction, <3> Multiplication, <4> Division --> ");
	scanf("%d", &c);

	printf("Enter the 2nd value to calculate. --> ");
	scanf("%d", &b);

	if (c == 1)
	{
		result = a + b;
		printf(" %d + %d = %d\n", a, b, result);
	}

	if (c == 2)
	{
		result = a - b;
		printf(" %d - %d = %d\n", a, b, result);
	}

	if (c == 3)
	{
		result = a * b;
		printf(" %d * %d = %d\n", a, b, result);
	}

	if (c == 4)
	{
		result = a / b;
		printf(" %d / %d = %d\n", a, b, result);
	}
}