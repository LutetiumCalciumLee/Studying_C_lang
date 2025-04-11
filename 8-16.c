#include<stdio.h>

void main()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int i, k;
	printf("Print from a[0][0] to a[2][3]\n");

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			printf("%3d", a[i][k]);
		}
		printf("\n");
	}
}