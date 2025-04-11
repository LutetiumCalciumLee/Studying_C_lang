#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a, b, c, d;
	int s;

	printf("Enter the first number : ");
	scanf("%d", &a);

	printf("Enter the second number : ");
	scanf("%d", &b);

	printf("Enter the third number : ");
	scanf("%d", &c);

	printf("Enter the fourth number : ");
	scanf("%d", &d);

	s = a + b + c + d;

	printf("sum ==> %d \n", s);

}