#include <stdio.h>

void main()
{
    enum week { sun, mon, tue, wed, thu, fri, sat };
    enum week ww;

    ww = sat;

    if (ww == sun)
        printf("Today is Sunday.\n");
    else
        printf("Today is not Sunday.\n");
}