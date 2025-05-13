#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a, b, c, d;
	int sum;

	printf("Enter the 1st value to calculate. --> ");
	scanf("%d", &a);

	printf("Enter the 2nd value to calculate. --> ");
	scanf("%d", &b);

	printf("Enter the 3rd value to calculate. --> ");
	scanf("%d", &c);

	printf("Enter the 4th value to calculate. --> ");
	scanf("%d", &d);

	sum = a + b + c + d;
	printf("\n %d + %d + %d + %d = %d\n",a,b,c,d,sum);
}