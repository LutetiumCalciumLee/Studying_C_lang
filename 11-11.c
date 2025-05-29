#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char str[200];
    FILE* rfp;
    FILE* wfp;

    rfp = fopen("c:\\windows\\win.ini", "r");
    wfp = fopen("c:\\temp\\data5.txt", "w");

    for (;;)
    {
        if (fgets(str, 200, rfp) == NULL)
            break;
        fputs(str, wfp);
    }

    fclose(rfp);
    fclose(wfp);
}