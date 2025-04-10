#include<stdio.h>

void main()
{
	int i, s = 0;

	for (i = 1; i <= 100; i++)
	{
		s = s + i;

		if (s >= 1000)
			break;
	}

	printf("What is the first position to exceed 1000 in the sum of 1 to 100? : %d\n",i);
}