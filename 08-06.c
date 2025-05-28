#include <stdio.h>

void main()
{
    int aa[] = { 10, 20, 30, 40, 50 };
    int count;

    count = sizeof(aa) / sizeof(int);

    printf("The number of elements in array aa is %d.\n", count);
}