#include<stdio.h>

void main()
{
	int a[] = { 10,20,30,40,50 };
	int c;

	c = sizeof(a) / sizeof(int);

	printf("�迭 a[]�� ����� ������ %d �Դϴ�.\n", c);
}
