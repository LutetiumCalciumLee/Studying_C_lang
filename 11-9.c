#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	FILE* rfp;
	int s = 0;
	int in, i;

	rfp = fopen("c:\\temp\\data2.txt", "r");

	for (i = 0; i < 5; i++)
	{
		fscanf(rfp, "%d", &in);
		s = s + in;
	}

	printf("sum ==> %d\n", s);

	fclose(rfp);
}