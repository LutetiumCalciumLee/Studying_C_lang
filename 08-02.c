#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int aa[4];
    int hap;

    printf("Enter the 1st number: ");
    scanf("%d", &aa[0]);
    printf("Enter the 2nd number: ");
    scanf("%d", &aa[1]);
    printf("Enter the 3rd number: ");
    scanf("%d", &aa[2]);
    printf("Enter the 4th number: ");
    scanf("%d", &aa[3]);

    hap = aa[0] + aa[1] + aa[2] + aa[3];

    printf("Sum => %d \n", hap);
}