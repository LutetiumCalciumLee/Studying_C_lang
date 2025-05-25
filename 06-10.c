#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int s = 0;
	int i;
	int n;

	printf("Enter the natural number : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		s = s + i;
	}

	printf("Result of sum from 1 to %d = %d \n",n,s);
}