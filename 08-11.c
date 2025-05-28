#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
void main()
{
    char ss[7] = "XYZ";

    strcat(ss, "ABC");

    printf("The contents of the concatenated character array ss ==> %s \n", ss);
}