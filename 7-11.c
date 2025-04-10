#include<stdio.h>

void main()
{
	int s = 0, i;

	for (i = 1; i <= 100; i++) 
	{
		s += i;

		if (s > 2000)
			goto mygoto;
	}

mygoto:
	printf("If u add 1 to %d, it's over 2000 \n",i);
}