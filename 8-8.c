#include<stdio.h>

void main()
{
	char s[5] = "abcd";
	char t[5];
	int i;

	for (i = 0; i < 4; i++)
	{
		t[i] = s[3 - i];
	}
	t[4] = '\0';

	printf("거꾸로 출력한 결과 --> %s \n", t);
}