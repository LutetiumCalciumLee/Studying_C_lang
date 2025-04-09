#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int s = 0;
	int i;
	int n1,n2,n3;

	printf("Enter the (start, last, add) number : ");
	scanf("%d %d %d", &n1, &n2, &n3);

	for (i = n1; i <= n2; i += n3) 
	{
		s = s + i;
	}
	printf("The sum of values increased by %d from %d to %d = %d \n",n1,n2,n3,s);

}