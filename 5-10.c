#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int year;
	printf("Enter your year of birth -->  ");
	scanf("%d", &year);

	printf("Your were born in the year of the ");
	switch (year % 12)
	{
	case 0:	printf("Monkey"); break;
	case 1:	printf("Chicken"); break;
	case 2:	printf("Dog"); break;
	case 3:	printf("Pig"); break;
	case 4: printf("Mouse"); break;
	case 5: printf("Cow"); break;
	case 6: printf("Tiger"); break;
	case 7: printf("Rabbit"); break;
	case 8: printf("Dragon"); break;
	case 9: printf("Snake"); break;
	case 10: printf("Horse"); break;
	case 11: printf("Sheep"); break;
	}
}