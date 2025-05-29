#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    char str[200];
    FILE* rfp;

    rfp = fopen("c:\\windows\\win.ini", "r");

    for (;;)
    {
        if (fgets(str, 200, rfp) == NULL)
            break;
        printf("%s", str);
    }

    fclose(rfp);
}