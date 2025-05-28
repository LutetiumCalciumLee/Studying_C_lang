#include <stdio.h>

void main()
{
    int aa[3] = { 10, 20, 30 };

    printf("The value of aa[0] is %d, the address is %d \n", aa[0], &aa[0]);
    printf("The value of aa[1] is %d, the address is %d \n", aa[1], &aa[1]);
    printf("The value of aa[2] is %d, the address is %d \n", aa[2], &aa[2]);
    printf("The value (address) of the array name aa is %d \n", aa);
}