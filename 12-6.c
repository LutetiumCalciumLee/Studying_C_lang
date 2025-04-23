#include<stdio.h>

void main()
{
	char data[3][100];
	int i;

	for (i = 0; i < 3; i++)
	{
		if (i == 0)
			printf(" 1st string : ");
		else if (i == 1)
			printf(" 2nd string : ");
		else if (i == 2)
			printf(" 3rd string : ");
		else
			printf(" %dth string : ", i + 1);
		gets(data[i]);		
	}

	printf("\n--Display the 2D array in reverse order of input--\n");
	for (i = 2; i >= 0; i--)
		printf(" %d :%s\n", i + 1, data[i]);
}