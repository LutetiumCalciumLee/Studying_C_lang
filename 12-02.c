#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int aa[10000];
    int* p;
    int i, hap = 0;
    int cnt;

    printf("How many numbers will you enter? ");
    scanf("%d", &cnt);

    for (i = 0; i < cnt; i++)
    {
        printf("%d-th number: ", i + 1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for (i = 0; i < cnt; i++)
        hap = hap + *(p + i);

    printf("Sum of the entered numbers => %d\n", hap);
}