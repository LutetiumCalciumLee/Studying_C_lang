#include <stdio.h>
#include <malloc.h>

void main()
{
    int* p, * s;
    int i, j;

    printf("Using malloc() function\n");
    p = (int*)malloc(sizeof(int) * 3);

    for (i = 0; i < 3; i++)
        printf("Initial value at p[%d] => %d\n", i, p[i]);

    free(p);

    printf("\nUsing calloc() function\n");
    s = (int*)calloc(3, sizeof(int));

    for (j = 0; j < 3; j++)
        printf("Initial value at s[%d] => %d\n", j, s[j]);

    free(s);
}