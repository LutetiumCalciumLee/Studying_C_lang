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

	printf("�Ųٷ� ����� ��� --> %s \n", t);
}