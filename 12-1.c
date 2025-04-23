#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int aa[3];
	int* p;
	int i, s = 0;

	for (i = 0; i < 3; i++)
	{
		if (i == 0)
			printf(" 1st digit : ");
		else if (i == 1)
			printf(" 2nd digit : ");
		else
			printf(" 3rd digit : ");

		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < 3; i++)
		s = s + *(p + i);

	printf("Sum of entered numbers ==> %d\n", s);
}