#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    FILE* wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("c:\\temp\\data7.txt", "w");

    for (i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &in);
        hap = hap + in;
    }

    fprintf(wfp, "Sum ==> : %d\n", hap);

    fclose(wfp);
}