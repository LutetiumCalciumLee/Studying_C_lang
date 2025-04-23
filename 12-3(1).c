#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 포함

/*void main()
{
    int* p;
    int i, s = 0;
    int c;

    printf(" Numbers to enter : ");
    scanf("%d", &c);

    p = (int*)malloc(sizeof(int) * c);

    for (i = 0; i < c; i++)
    {
        if (i == 0)
            printf(" 1st number : ");
        else if (i == 1)
            printf(" 2nd number : ");
        else if (i == 2)
            printf(" 3rd number : ");
        else
            printf(" %dth number : ", i + 1);
        scanf("%d", p + i);
    }

    for (i = 0; i < c; i++)
        s = s + *(p + i);

    printf("Sum of entered numbers ==> %d\n", s);

    free(p);
} */

// 서수 접미사 구하는 함수
const char* getOrdinalSuffix(int n) {
    if (n % 100 >= 11 && n % 100 <= 13)
        return "th";

    switch (n % 10) {
    case 1: return "st";
    case 2: return "nd";
    case 3: return "rd";
    default: return "th";
    }
}

int main()
{
    int* p;
    int i, s = 0;
    int c;

    printf("Numbers to enter: ");
    scanf("%d", &c);

    p = (int*)malloc(sizeof(int) * c);
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < c; i++)
    {
        int order = i + 1;
        printf(" %d%s number: ", order, getOrdinalSuffix(order));
        scanf("%d", p + i);
    }

    for (i = 0; i < c; i++)
        s += *(p + i);

    printf("Sum of entered numbers ==> %d\n", s);

    free(p);
    return 0;
}
