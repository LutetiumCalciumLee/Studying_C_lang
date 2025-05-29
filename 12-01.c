#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int aa[3];
    int* p;
    int i, hap = 0;

    for (i = 0; i < 3; i++)
    {
        printf("%d-th number: ", i + 1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for (i = 0; i < 3; i++)
        hap = hap + *(p + i);

    printf("Sum of the entered numbers => %d\n", hap);
}