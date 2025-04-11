#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

void main()
{
	char s[] = "xyz";
	int l;

	l = strlen(s);

	printf("문자열 \"%s\"의 길이 --> %d \n", s, l);
}