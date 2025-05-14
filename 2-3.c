// Modify the source code (print help message)

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a, b;
	int result;

	printf("Enter the first value to calculate. --> ");
	scanf("%d", &a);

	printf("Enter the second value to calculate. --> ");
	scanf("%d", &b);

	result = a + b;
	printf("%d + %d = %d\n",a,b,result);

	result = a - b;
	printf("%d - %d = %d\n", a, b, result);

	result = a * b;
	printf("%d * %d = %d\n", a, b, result);

	result = a / b;
	printf("%d / %d = %d\n", a, b, result);
}