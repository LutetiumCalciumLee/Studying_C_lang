#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a,b;
	char c;
	int result;
	
	printf("1st value to calculate --> ");
	scanf("%d", &a);

	printf("+, -, *, /, % --> ");
	scanf(" %c", &c);

	printf("2nd value to calculate --> ");
	scanf("%d", &b);

	if (c == '+' )
	{
		result = a + b;
		printf("\n + %c %d = %d \n", a,b,result);
	}

	if (c == '-')
	{
		result = a - b;
		printf("\n %d - %d = %d \n", a, b, result);
	}
	
	if (c == '*')
	{
		result = a * b;
		printf("\n %d * %d = %d \n", a, b, result);
	}

	if (c == '/')
	{
		if (b != 0)
		{
			result = a / b;
			printf("\n %d %c %d = %d \n", a, '/', b, result);
		}
		else
			printf("\n Division by 0 is not allowed. \n");
		}

	if (c == '%')
	{
		if (b != 0)
		{
			result = a % b;
			printf("\n %d %% %d = %d \n", a, b, result);
		}
		else
			printf("\n If you divide by 0, there will be no remainder. \n");
	}
}