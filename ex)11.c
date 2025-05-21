#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a , b ;
	char c;
	
	printf("Enter the first natural number. : ");
	scanf("%d", &a);

	printf("Enter the operator. : ");
	scanf(" %c", &c);

	printf("Enter the second natural number : ");
	scanf("%d", &b);

	if (c=='+')
		printf("%d + %d = %d \n",a,b,a+b);
	if (c == '-')
		printf("%d - %d = %d \n", a, b, a - b);
	if (c == '*')
		printf("%d * %d = %d \n", a, b, a * b);
	if (c == '/')
		printf("%d / %d = %0.2f \n", a, b, (float)a / b);
	if (c == '%')
		printf("%d %% %d = %d \n", a, b, a % b);
}