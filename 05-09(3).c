#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a;
	printf("Select a natural number between 1 to 4 --> ");
	scanf("%d", &a);

	switch (a)
	{
	case 1 :
		printf("You selected 1.\n");
		break;
	case 2 :
		printf("You selected 2. \n");
		break;
	case 3 :
		printf("You selected 3. \n");
		break;
	case 4 : 
		printf("You selected 4. \n");
		break;
	default :
		printf("You input wrong number");
	}
}