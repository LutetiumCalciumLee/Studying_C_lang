#include <stdio.h>

void main()
{
    char ss[8] = "Basic-C";
    int i;

    ss[5] = '#';

    for (i = 0; i < 8; i++)
    {
        printf("ss[%d] => %c \n", i, ss[i]);
    }

    printf("Character array ss ==> %s \n", ss);
}