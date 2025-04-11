#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a[4] = { 100,200,300,400 };
	int b[] = { 100,200,300,400 };
	int c[4] = { 100,200 };
	int d[4]= { 0 };
	int i;

	for (i = 0; i < 4; i++)
		printf("a[%d] ==> %d\t", i, a[i]);
	printf("\n");

	for (i = 0; i < 4; i++)
		printf("b[%d] ==> %d\t", i, b[i]);
	printf("\n");

	for (i = 0; i < 4; i++)
		printf("c[%d] ==> %d\t", i, c[i]);
	printf("\n");

	for (i = 0; i < 4; i++)
		printf("d[%d] ==> %d\t", i, d[i]);
	printf("\n");
}