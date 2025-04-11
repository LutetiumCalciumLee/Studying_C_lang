#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a[4];
	int s;

	printf("Enter the first number : ");
	scanf("%d", &a[0]);

	printf("Enter the second number : ");
	scanf("%d", &a[1]);

	printf("Enter the third number : ");
	scanf("%d", &a[2]);

	printf("Enter the fourth number : ");
	scanf("%d", &a[3]);

	s = a[0] + a[1] + a[2] + a[3];

	printf("----------------------------\n");
	printf("sum ==> %d \n", s);

}