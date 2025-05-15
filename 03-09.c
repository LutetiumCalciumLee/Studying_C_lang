#include<stdio.h>

void main()
{
	int a, b, c, d;

	a = 100 + 100;
	b = a + 100;
	c = a + b - 100;
	d = a + b + c;
	printf("The values of a,b,c,d ==> %d, %d, %d, %d \n",a,b,c,d);

	a = b = c = d = 100;
	printf("The values of a,b,c,d ==> %d, %d, %d, %d \n", a, b, c, d);

	a = 100;
	a = a + 200;
	printf("The value of a ==> %d \n",a);
}