#include<stdio.h>

void main()
{
	char s[8] = "Basic-c";
	int i;

	s[5] = '#';

	for (i = 0; i < 8; i++)
	{
		printf("s[%d] ==> %c \n", i, s[i]);
	}

	printf("문자열 배열 s ==> %s \n", s);
}