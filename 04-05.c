#include<stdio.h>

void main()
{
	int a = 100, b = 200;

	printf(" %d == %d is %d. \n",a,b,a==b);
	printf(" %d != %d is %d. \n",a,b,a!=b);
	printf(" %d > %d is %d. \n",a,b,a>b);
	printf(" %d < %d is %d. \n",a,b,a<b);
	printf(" %d >= %d is %d. \n",a,b,a>=b);
	printf(" %d <= %d is %d. \n\n",a,b,a<=b);

	printf(" %d = %d is %d. \n",a,b,a=b);
}