#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a;

	printf("Enter the integer : ");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("You entered even number.\n");
	}
	else
	{
		printf("You entered odd number.\n");
	}
}
