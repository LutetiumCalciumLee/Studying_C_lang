#include<stdio.h>

void main()
{
	int s = 0;
	int i;

	for (i = 1; i <= 10; i++)
	{
		s += i;
	}

	printf("Sum from 1 to 10 =  %d\n",s);
}
