#include <stdio.h>

void main()
{
    char stack[5];
    int top = 0;

    stack[top] = 'A';
    printf("%c car enters the tunnel\n", stack[top]);
    top++;

    stack[top] = 'B';
    printf("%c car enters the tunnel\n", stack[top]);
    top++;

    stack[top] = 'C';
    printf("%c car enters the tunnel\n", stack[top]);
    top++;

    printf("\n");

    top--;
    printf("%c car exits the tunnel\n", stack[top]);
    stack[top] = ' ';

    top--;
    printf("%c car exits the tunnel\n", stack[top]);
    stack[top] = ' ';

    top--;
    printf("%c car exits the tunnel\n", stack[top]);
    stack[top] = ' ';
}