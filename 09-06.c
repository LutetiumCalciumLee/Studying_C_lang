#include <stdio.h>

void main()
{
    char ch; 
    char* p;

    ch = 'A';   
    p = &ch;

    printf("Value held by ch: ch ==> %c \n", ch);
    printf("Address of ch: &ch ==> %d \n", &ch);
    printf("Value held by p: p ==> %d \n", p);
    printf("Actual value at the address pointed to by p: *p ==> %c \n", *p);
}