#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
void main()
{
	int* p;
	int i, s = 0;
	int c;

	printf(" Numbers to enter : ");
	scanf("%d", &c);

	p = (int*)malloc(sizeof(int) * c);

	for (i = 0; i < c; i++)
	{
		if (i == 0)
			printf(" 1st number : ");
		else if (i == 1)
			printf(" 2nd number : ");
		else if (i == 2)
			printf(" 3rd number : ");
		else
			printf(" %dth number : ", i + 1);
		scanf("%d", p + i);
	}

	for (i = 0; i < c; i++)
		s = s + *(p + i);

	printf("Sum of entered numbers ==> %d\n", s);

	free(p);
}