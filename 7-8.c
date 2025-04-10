#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a, b;

	while (1)
	{
		printf("Enter two numbers for add (if you want to stop, press 0) : ") ;
		scanf("%d %d", &a, &b);

		if (a == 0)
			break;

		printf("%d + %d = %d \n",a,b,a+b);
	}

	printf("Since you pressed 0, you can escape from the for sentences \n");
}