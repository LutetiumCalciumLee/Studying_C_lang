#include<stdio.h>

void main()
{
	int a = 100, b = -200;

	printf(" AND operation of constant : %d \n", a && b);
	printf(" OR operation of constant : %d \n", a || b);
	printf(" NOT operation of constant : %d \n", !(a && b));
}