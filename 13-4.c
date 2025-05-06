#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

void main()
{
	char name[3][10];
	int kor[3];
	int eng[3];
	float m[3];

	int i;

	strcpy(name[0], "KIM");
	kor[0] = 90;
	eng[0] = 80;
	m[0] = (kor[0] + eng[0]) / 2.0f;

	strcpy(name[1], "LEE");
	kor[1] = 70;
	eng[1] = 60;
	m[1] = (kor[1] + eng[1]) / 2.0f;

	strcpy(name[2], "PARK");
	kor[2] = 50;
	eng[2] = 40;
	m[2] = (kor[2] + eng[2]) / 2.0f;

	for (i = 0; i < 3; i++)
	{
		printf("Student name ==> %s\n", name[i]);
		printf("Korean score ==> %d\n", kor[i]);
		printf("English score ==> %d\n", eng[i]);
		printf("Average score ==> %.2f\n", m[i]);
		printf("\n");
	}
}