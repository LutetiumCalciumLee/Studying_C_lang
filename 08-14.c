#include <stdio.h>

void main()
{
    int aa[3][4];
    int i, k;

    int val = 1;

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            aa[i][k] = val;
            val++;
        }
    }

    printf("Print from aa[0][0] to aa[2][3]\n");

    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            printf("%3d ", aa[i][k]);
        }
        printf("\n");
    }
}