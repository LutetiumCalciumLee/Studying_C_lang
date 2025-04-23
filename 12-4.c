#include <stdio.h>
#include <malloc.h>

void main()
{
	int* p,* s;
	int i, j;

	printf("Using malloc( ) function\n");
	p=(int*)malloc(sizeof(int) * 3);

	for (i = 0; i < 3; i++)
		printf("Initial value p[%d] of the allocated space ==> %d\n", i, p[i]);

	free(p);

	printf("\nUsing calloc( ) function\n");
	s = (int*)calloc(sizeof(int) , 3);

	for (j = 0; j < 3; j++)
		printf("Initial value s[%d] of the allocated space ==> %d\n", j, s[j]);

	free(s);
}