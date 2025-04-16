#include<stdio.h>

int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}

void main()
{
	int s;

	s = plus(100, 200);

	printf("The result of plus( ) fuction for 100 and 200 is : %d\n", s);
}