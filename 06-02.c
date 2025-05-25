#include <stdio.h>

void main()
{
    int i;
    char* s;

    for (i = 1; i < 100000; i *= 2)
    {
        if (i % 100 >= 11 && i % 100 <= 13)
            s = "th";
        else if (i % 10 == 1)
            s = "st";
        else if (i % 10 == 2)
            s = "nd";
        else if (i % 10 == 3)
            s = "rd";
        else
            s = "th";

        printf("Hello! I'm studying the spinning for-loop for the %d%s time.\n", i, s);
    }
}