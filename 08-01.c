#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int a, b, c, d;
    int hap;

    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    printf("Enter the 4th number: ");
    scanf("%d", &d);

    hap = a + b + c + d;

    printf("Sum => %d \n", hap);
}