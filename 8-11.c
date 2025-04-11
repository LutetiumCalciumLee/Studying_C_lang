#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

void main()
{
	char s[7] = "XYZ";

	strcat(s, "ABC");

	printf("이어진 문자열 s의 내용 -->%s \n", s);
}