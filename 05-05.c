#include<stdio.h>

void main()
{
	int a = 200;

	if(a<100)
	{
		printf("Under 100 \n");
		printf("Because it's true, the previous line would be shown.\n");
	}
	else
	{
		printf("Over 100 \n");
		printf("Because it's false, the previous line would be shown.\n");
	}

	printf("Program end!\n");
}