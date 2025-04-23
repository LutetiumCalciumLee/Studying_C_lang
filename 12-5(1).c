#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include<stdio.h>

/*void main()
{
    int* p;
    int i, s = 0;
    int c = 0;
    int data;

    p = (int*)malloc(sizeof(int) * 1);
    printf(" 1st number : ");
    scanf("%d", &p[0]);
    c++;

    for (i = 2; ; i++)
    {
        if (i == 2)
            printf(" 2nd number : ");
        else if (i == 3)
            printf(" 3rd number : ");
        else
            printf(" %dth number : ", i);
        scanf("%d", &data);

        if (data != 0)
            p = (int*)realloc(p, sizeof(int) * i);
        else
            break;

        p[i - 1] = data;
        c++;
    }

    for (i = 0; i < c; i++)
        s = s + p[i];

    printf("Sum of entered numbers ==> %d\n", s);

    free(p);
}
*/

// 서수 접미사 반환 함수
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
    int c = 0;
    int data;

    // 첫 번째 입력
    p = (int*)malloc(sizeof(int) * 1);
    if (p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf(" 1st number : ");
    scanf("%d", &p[0]);
    c++;

    // 이후 입력 루프
    for (i = 2;; i++)
    {
        printf(" %d%s number : ", i, getOrdinalSuffix(i));
        scanf("%d", &data);

        if (data == 0)
            break;

        // 메모리 재할당
        int* temp = (int*)realloc(p, sizeof(int) * i);
        if (temp == NULL) {
            printf("Memory reallocation failed.\n");
            free(p);
            return 1;
        }
        p = temp;

        p[i - 1] = data;
        c++;
    }

    // 합계 계산
    for (i = 0; i < c; i++)
        s += p[i];

    printf("Sum of entered numbers ==> %d\n", s);

    free(p);
    return 0;
}
