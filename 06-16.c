#include<stdio.h>

void main()
{
	int i, k;

	for (i = 1, k = 1 ; i <= 20; i++,k++)
	//                  ↑ 변수 k로 해도 가능
		printf(" %d X %d = %d \n", i, k, i * k);
		
}