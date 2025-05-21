#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a, b;
	char c;

	printf("Enter the formula in one line. : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '+' : 
		printf("\n%d + %d = %d \n", a,b,a+b );
		break;
	case '-' :
		printf("\n%d - %d = %d \n", a,b,a-b);
		break;
	case '*' :
		printf("\n%d * %d = %d \n", a, b, a*b );
		break;
	case '/' :
		printf("\n%d / %d = %0.3f \n", a, b, (float)a/b );
		break;
	case '%' :
		printf("\n%d %% %d = %d \n",a, b, a%b );
		break;
	default :
		printf("\nEnter the operator correctly!! \n");
	}
}