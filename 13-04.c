#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
    char name[3][10];
    int kor[3];
    int eng[3];
    float avg[3];

    int i;

    strcpy(name[0], "Kim");
    kor[0] = 90;
    eng[0] = 80;
    avg[0] = (kor[0] + eng[0]) / 2.0f;

    strcpy(name[1], "Lee");
    kor[1] = 70;
    eng[1] = 60;
    avg[1] = (kor[1] + eng[1]) / 2.0f;

    strcpy(name[2], "Park");
    kor[2] = 50;
    eng[2] = 40;
    avg[2] = (kor[2] + eng[2]) / 2.0f;

    for (i = 0; i < 3; i++)
    {
        printf("Student name ==> %s\n", name[i]);
        printf("Korean score ==> %d\n", kor[i]);
        printf("English score ==> %d\n", eng[i]);
        printf("Average score ==> %5.1f\n", avg[i]);
        printf("\n");
    }
}