#include<stdio.h>

void main()
{
	int a[3][4];
	int i, k;

	int v = 1;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			a[i][k] = v;
			v++;
		}
	}

	printf("Print from a[0][0] to a[2][3] \n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", a[i][k]);
		}
		printf("\n");
	}
}
