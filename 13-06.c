#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    struct student {
        char name[10];
        int kor;
        int eng;
        float avg;
    };

    struct student s;
    struct student* p;

    p = &s;

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter Korean score: ");
    scanf("%d", &p->kor);

    printf("Enter English score: ");
    scanf("%d", &p->eng);

    p->avg = (p->kor + p->eng) / 2.0f;

    printf("\n-- Using Structure Pointer --\n");
    printf("Student name    ==> %s\n", p->name);
    printf("Korean score    ==> %d\n", p->kor);
    printf("English score   ==> %d\n", p->eng);
    printf("Average score   ==> %5.1f\n", p->avg);
}