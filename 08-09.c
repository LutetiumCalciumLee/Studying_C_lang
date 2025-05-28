#define _CRT_SECURE_NO_WARNINGS  
#include <string.h> 
#include <stdio.h>  
void main()
{
    char ss[] = "XYZ";  
    int len;

    len = strlen(ss);   

    printf("The length of string \"%s\" is => %d \n", ss, len);
}