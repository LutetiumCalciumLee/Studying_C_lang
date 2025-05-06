#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	struct student
	{
		char name[10];
		int kor;
		int eng;
		float m;
	};

	struct student s;

	printf("Name : ");
	scanf("%s", s.name, 9);

	printf("Korean score : ");
	scanf("%d", &s.kor);

	printf("English score : ");
	scanf("%d", &s.eng);

	s.m = (s.kor + s.eng) / 2.0f;

	printf("\nStudent name : %s\n", s.name);
	printf("Korean score : %d\n", s.kor);
	printf("English score : %d\n", s.eng);
	printf("Average score : %5.1f\n", s.m);
}