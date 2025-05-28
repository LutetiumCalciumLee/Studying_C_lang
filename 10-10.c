#include <stdio.h>

void func1(char a, char b)
{
    int temp;

    temp = a;
    // 1
    b = temp;
}

void func2(char* a, char* b)
{
    int temp;

    temp = *a;
    // 2
    *b = temp;
}

void main()
{
    char x = 'A', y = 'Z';

    printf("Original values: x=%c, y=%c\n", x, y);

    func1( /* 3 */ x, y);
    printf("After passing values: x=%c, y=%c\n", x, y);

    func2( /* 4 */ &x, &y);
    printf("After passing addresses: x=%c, y=%c\n", x, y);
}