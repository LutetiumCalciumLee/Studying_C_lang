#include<stdio.h>

void main()
{
	int a = 75;

	if (a > 50)
	{
		if (a < 100)
		{
			printf("Over 50, under 100\n");
		}
		else
		{
			printf("Wow, 100 over.\n");
		}
	}
	else
	{
		printf("Wooh, 50 under.\n");
	}
}