#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void main()
{
    int* p;
    int i, hap = 0;
    int cnt = 0;
    int data;

    p = (int*)malloc(sizeof(int) * 1);
    printf("Enter the 1st number: ");
    scanf("%d", &p[0]);
    cnt++;

    for (i = 2; ; i++)
    {
        printf("Enter the %dth number: ", i);
        scanf("%d", &data);

        if (data != 0)
            p = (int*)realloc(p, sizeof(int) * i);
        else
            break;

        p[i - 1] = data;
        cnt++;
    }

    for (i = 0; i < cnt; i++)
        hap = hap + p[i];

    printf("Sum of the entered numbers ==> %d\n", hap);

    free(p);
}