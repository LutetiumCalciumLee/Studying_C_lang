#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	char stack[5];
	int top = 0;

	char CarName = 'A';
	int select = 9;

	while (select != 3)
	{
		printf("<1> Putting in a car <2> Taking out a car <3> End : ");
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			if(top>=5)
			{
				printf("The tunnel is full, so cars can't enter.\n");
			}
			else
			{
				stack[top] = CarName++;
				printf("%c car enter the tunnel.\n", stack[top]);
				top++;
			}
			break;

		case 2:
			if(top<=0)
			{
				printf("There are no cars to exit.\n");
			}
			else
			{
				top--;
				printf("%c car exit the tunnel.\n", stack[top]);
				stack[top] = ' ';
			}
			break;
		case 3:
			printf("There are %d cars in the tunnel.\n", top);
			printf("Finish the program\n");
			break;

		default:
			printf("You entered a wrong number. try again. \n\n");
		}

	}
}