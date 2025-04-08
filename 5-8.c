#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int a;
	printf("input a point -->  ");
	scanf("%d", &a);
	printf("\ngrade : ");
	if (a > 90)
		printf("A");
	else
		if(a>80)
			printf("B");
		else
			if(a>=70)
				printf("C");
			else
				if(a>=60)
					printf("D");
				else
					printf("F");
	printf("\n");
	}
