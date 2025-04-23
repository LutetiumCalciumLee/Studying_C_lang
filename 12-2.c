#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int aa[10000];
	int* p;
	int i, s = 0;
	int c;

	printf(" Numbers to enter : ");
	scanf("%d", &c);

	for (i = 0; i < c; i++)
	{
		if (i == 0)
			printf(" 1st number to enter : ");
		else if (i == 1)
			printf(" 2nd number to enter : ");
		else if (i == 2)
			printf(" 3rd number to enter : ");
		else
			printf(" %dth number to enter : ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < c; i++)
		s = s + *(p + i);

	printf("Sum of entered numbers ==> %d\n", s);
}