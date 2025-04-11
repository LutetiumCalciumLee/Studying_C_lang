#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a[4];
	int s = 0;
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf("%d", &a[i]);
	}

	s = a[0] + a[1] + a[2] + a[3];

	printf("sum ==> %d \n",s);

}