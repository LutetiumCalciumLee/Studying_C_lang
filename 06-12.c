#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int i;
	int m;

	printf("Times?? ");
	scanf("%d",&m);

	for (i = 1; i <= 20; i++) {
		printf("%d X %d = %d \n" , m, i, m*i);
	}
}
