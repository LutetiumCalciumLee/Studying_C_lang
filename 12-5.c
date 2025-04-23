#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include<stdio.h>

void main()
{
	int* p;
	int i, s = 0;
	int c = 0;
	int data;

	p = (int*)malloc(sizeof(int) * 1);
	printf(" 1st number : ");
	scanf("%d", &p[0]);
	c++;

	for (i = 2; ; i++)
	{
		if (i == 2)
			printf(" 2nd number : ");
		else if (i == 3)
			printf(" 3rd number : ");
		else
			printf(" %dth number : ",i);
		scanf("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;
		c++;
	}

	for (i = 0; i < c; i++)
		s = s + p[i];

	printf("Sum of entered numbers ==> %d\n", s);

	free(p);
}