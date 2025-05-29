#include <stdio.h>

void main()
{
    char data[3][100];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%d-th string: ", i + 1);
        gets(data[i]);
    }

    printf("\n -- Output in reverse order (2D array) --\n");
    for (i = 2; i >= 0; i--)
    {
        printf("%d : %s\n", i + 1, data[i]);
    }
}