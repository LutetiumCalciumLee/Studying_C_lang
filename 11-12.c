#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	FILE* wfp;
	int s = 0;
	int in, i;

	wfp = fopen("c:\\temp\\data7.txt", "w");

	for (i = 0; i < 5; i++)
	{
		printf(" integer %d : ", i + 1);
		scanf("%d", &in);
		s = s + in;
	}

	fprintf(wfp, "sum ==> : %d\n", s);

	fclose(wfp);
}