#include <stdio.h>
#include <string.h>

void main()
{
    char password[5] = "5678";
    char input[5];
    int i;

    printf("Enter a 4-digit password: ");
    for (i = 0; i < 4; i++)
        input[i] = getchar();

    if (strncmp(password, input, 4) == 0)
    {
        printf("\nPassword matched~\n");
    }
    else
    {
        printf("\nThe entered password ");
        for (i = 0; i < 4; i++)
            putchar(input[i]);
        printf(" is incorrect\n");
    }
}