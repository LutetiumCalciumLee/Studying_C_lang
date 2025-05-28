#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
void main()
{
    char ss[20];
    char tt[20];
    int r1, r2;

    puts("Please enter the first string.");
    gets(ss);
    puts("Please enter the second string.");
    gets(tt);

    r1 = strlen(ss);
    r2 = strlen(tt);

    printf("The length of the first string is ==> %d \n", r1);
    printf("The length of the second string is ==> %d \n", r2);

    if (strcmp(ss, tt) == 0)
        puts("The contents of the two strings are the same.\n");
    else
        puts("The contents of the two strings are different.\n");
}