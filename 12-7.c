#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include <malloc.h>

void main()
{
	char* p[3];
	char t[100];
	int i, s;

	for (i = 0; i < 3; i++)
	{
		if (i == 0)
			printf(" 1st string : ");
		else if (i == 1)
			printf(" 2nd string : ");
		else if (i == 2)
			printf(" 3rd string : ");
		else
			printf(" %dth string : ", i + 1);
		gets(t);

		s = strlen(t);
		p[i] = (char*)malloc((sizeof(char) * s) + 1);

		strcpy(p[i], t);
	}

	printf("\n--Reverse output of input(pointer)--\n");
	for (i = 2; i >= 0; i--)
		printf("%d :%s\n", i + 1, p[i]);

	for (i = 0; i < 3; i++)
		free(p[i]);
}