#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
    char* p[3];
    char imsi[100];
    int i, size;

    for (i = 0; i < 3; i++)
    {
        printf("%d-th string: ", i + 1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char*)malloc(sizeof(char) * size + 1);

        strcpy(p[i], imsi);
    }

    printf("\n-- Output in reverse order (pointer) --\n");
    for (i = 2; i >= 0; i--)
    {
        printf("%d: %s\n", i + 1, p[i]);
    }

    for (i = 0; i < 3; i++)
        free(p[i]);
}