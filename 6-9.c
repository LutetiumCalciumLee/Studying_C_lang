#include<stdio.h>

void main()
{
	int s = 0;
	int i;

	for (i = 501; i <= 1000; i += 2) {
		s = s + i;
	}

	printf("Sum of odd numbers from 500 to 1000  = %d\n",s);
}