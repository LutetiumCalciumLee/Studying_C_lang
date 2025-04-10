#include<stdio.h>

void main()
{
	int i, s = 0;

	i = 1;
	while (i <= 10) {
		s = s + i;
		i++;
	}
	printf("1에서 10까지의 합 : %d \n",s);
}
