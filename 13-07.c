#include <stdio.h>

void main()
{
    union student {
        int tot;
        char grade;
    };

    union student u;

    u.tot = 300;
    u.grade = 'A';

    printf("\n-- Using Union --\n");
    printf("Total => %d\n", u.tot);
    printf("Grade => %c\n", u.grade);
}