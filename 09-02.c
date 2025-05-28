#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char stack[5];
    int top = 0;

    char carName = 'A';  
    int select = 9;   

    while (select != 3) 
    {
        printf("<1> Add car <2> Remove car <3> Exit : "); 
        scanf("%d", &select);   

        switch (select)
        {
        case 1:
            if (top <= 5) 
            {
                printf("The tunnel is full, so the car cannot enter.\n");
            }
            else
            {
                stack[top] = carName++;
                printf("%c car enters the tunnel\n", stack[top]);
                top++;
            }
            break;

        case 2:
            if (top <= 0) 
            {
                printf("There is no car to remove.\n");
            }
            else
            {
                top--;
                printf("%c car exits the tunnel\n", stack[top]);
                stack[top] = ' ';
            }
            break;

        case 3:
            printf("There are currently %d cars in the tunnel.\n", top);
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid input. Please try again.\n");
        }
    }
}