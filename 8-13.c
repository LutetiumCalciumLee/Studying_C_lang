#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

void main()
{
	char s[20];
	char t[20];
	int r1, r2;

	puts("Enter the first sentence.");
	gets(s);

	puts("Enter the second sentence.");
	gets(t);

	r1 = strlen(s);
	r2 = strlen(t);

	printf("\nThe length of first sentence --> %d \n", r1);
	printf("The length of second sentence --> %d \n\n", r2);

	if (strcmp (s,t) == 0)
		puts("There are same content of two strings. \n");
	else
		puts("There are different content of two srings. \n\n");
}