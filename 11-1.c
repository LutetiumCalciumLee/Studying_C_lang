#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a;
	float b;
	char ch;
	char s[20];

	printf("Enter the integer : ");
	scanf("%d", &a);

	printf("Enter the float : ");
	scanf("%f", &b);

	printf("Enter the character : ");
	scanf(" %c", &ch);

	printf("Enter the strings : ");
	scanf("%s", &s);

	printf("\nDecimal number of integer ==> %d\n",a);
	printf("Hexadecimal number of integer ==> %X\n", a);
	printf("Octal number of integer ==> %o\n", a);
	printf("Float ==> %10.3f\n", b);
	printf("Float for engineering ==> %e\n", b);
	printf("Character ==> %c\n", ch);
	printf("Strings ==> %s\n", s);

}