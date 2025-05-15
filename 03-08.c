#include<stdio.h>

void main()
{
	int a, b;
	float c, d;

	a = 100;
	b = a;

	c = 111.1f;
	d = c;

	printf("The values of a,b ==> %d, %d \n",a,b);
	printf("The values of c,d ==> %5.1f, %5.1f \n", c, d);
}