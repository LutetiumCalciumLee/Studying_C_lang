#include<stdio.h>

void main()
{
	int a = 99;

	printf(" AND operation : %d \n", (a>=100)&&(a<=200));
	printf(" OR operation : %d \n", (a >= 100) || (a <= 200));
	printf(" NOT operation : %d \n", !(a == 200));
}