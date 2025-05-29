#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    char name[10];
    int kor;
    int eng;
    float avg;

    printf("Name: ");
    scanf("%s", name, 9);

    printf("Korean score: ");
    scanf("%d", &kor);

    printf("English score: ");
    scanf("%d", &eng);

    avg = (kor + eng) / 2.0f;

    printf("\n");
    printf("Student Name  ==> %s\n", name);
    printf("Korean Score  ==> %d\n", kor);
    printf("English Score ==> %d\n", eng);
    printf("Average Score ==> %5.1f\n", avg);
}