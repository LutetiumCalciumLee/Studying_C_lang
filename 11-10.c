#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char s[20];
    FILE* wfp;

    wfp = fopen("c:\\temp\\data3.txt", "w");

    printf("Enter a string (up to 19 characters): ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}