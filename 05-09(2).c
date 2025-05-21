#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a;
	printf("Input your point --> ");
	scanf("%d", &a);
	printf("\nYour Grade is : ");

	switch (a / 10){
		printf("Your Grade is :  ");
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
	
	}
	printf("   (switch)\n");
}