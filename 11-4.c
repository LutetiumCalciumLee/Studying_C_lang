#include<string.h>
#include<stdio.h>

void main()
{
	char password[5] = "5678";
	char input[5];
	int i;

	printf("Enter the password 4 digits : ");
	for (i = 0; i < 4; i++)
		input[i] = getch();

	if (strncmp(password, input, 4) == 0)
	{
		printf("\nCorrect password\n");
	}
	else
	{
		printf("\nYou entered password ");

		for (i = 0; i < 4;i++)
			putch(input[i]);

		printf(" is wrong.\n");
	}
}