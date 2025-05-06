#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char name[10];
	int kor;
	int eng;
	float m;

	printf("Name : ");
	scanf("%s", name, 9);

	printf("Korean score : ");
	scanf("%d", &kor);

	printf("English score : ");
	scanf("%d", &eng);

	m = (kor + eng) / 2.0f;

	printf("\nStudent name : %s\n",name);
	printf("Korean score : %d\n",kor);
	printf("English score : %d\n",eng);
	printf("Average score : %5.1f\n",m);
}