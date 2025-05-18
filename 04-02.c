#include<stdio.h>

void main()
{
	int a = 2, b = 3, c = 4;
	int result1, q, r;
	float result2;

	result1 = a + b - c;
	printf(" %d + %d - %d = %d \n",a,b,c,result1);

	result1 = a + b * c;
	printf(" %d + %d * %d = %d \n",a,b,c,result1);

	result2 = a * b / (float)c;
	printf(" %d * %d / %d = %f \n",a,b,c,result2);

	q = c / b;
	printf(" The quotient of %d / %d is %d \n",c,b,q);

	r = c % b;
	printf(" The remainder of %d %% %d is %d \n",c,b,r);
}