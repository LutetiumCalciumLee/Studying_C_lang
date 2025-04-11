#include<stdio.h>

void main()
{
	int a[] = { 10,20,30,40,50 };
	int c;

	c = sizeof(a) / sizeof(int);

	printf("배열 a[]의 요소의 갯수는 %d 입니다.\n", c);
}
