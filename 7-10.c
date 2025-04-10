#include<stdio.h>

void main()
{
	int s = 0, i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;

		s += i;
	}
	printf("Sum from 1 to 100 (excluding multiples of 3) : %d\n",s);
}