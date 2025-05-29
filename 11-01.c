#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int a;
    float b;
    char ch;
    char s[20];

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Enter a string: ");
    scanf("%s", s);

    printf("\nInteger in decimal ==> %d\n", a);
    printf("Integer in hexadecimal ==> %X\n", a);
    printf("Integer in octal ==> %o\n", a);
    printf("Float ==> %10.3f\n", b);
    printf("Float (scientific notation) ==> %e\n", b);
    printf("Character ==> %c\n", ch);
    printf("String ==> %s\n", s);
}