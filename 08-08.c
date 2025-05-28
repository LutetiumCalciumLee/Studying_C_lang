#include <stdio.h>

void main()
{
    char ss[5] = "abcd";
    char tt[5];
    int i;

    for (i = 0; i < 4; i++)
    {
        tt[i] = ss[i];
    }
    tt[4] = '\0'; 

    printf("The result printed as a string => %s \n", tt);
}