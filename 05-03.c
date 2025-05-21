#include<stdio.h>

void main()
{
	int a = 200;

	if (a < 100)
	{
		printf("Under 100...\n");
		printf("Because it's false, the previous line won't be shown.\n");
	}

	printf("Program end! \n");
}