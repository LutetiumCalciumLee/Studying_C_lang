#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include <malloc.h>

/*
void main()
{
	char* p[3];
	char t[100];
	int i, s;

	for (i = 0; i < 3; i++)
	{
		if (i == 0)
			printf(" 1st string : ");
		else if (i == 1)
			printf(" 2nd string : ");
		else if (i == 2)
			printf(" 3rd string : ");
		else
			printf(" %dth string : ", i + 1);
		gets(t);

		s = strlen(t);
		p[i] = (char*)malloc((sizeof(char) * s) + 1);

		strcpy(p[i], t);
	}

	printf("\n--Reverse output of input(pointer)--\n");
	for (i = 2; i >= 0; i--)
		printf("%d :%s\n", i + 1, p[i]);

	for (i = 0; i < 3; i++)
		free(p[i]);
}
*/

// 서수 접미사 함수
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
    char* p[3];
    char t[100];
    int i, s;

    for (i = 0; i < 3; i++)
    {
        int order = i + 1;
        printf(" %d%s string : ", order, getOrdinalSuffix(order));

        // 안전한 문자열 입력
        fgets(t, sizeof(t), stdin);
        t[strcspn(t, "\n")] = '\0'; // 개행 문자 제거

        s = strlen(t);
        p[i] = (char*)malloc((s + 1) * sizeof(char));
        if (p[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        strcpy(p[i], t);
    }

    printf("\n--Reverse output of input (pointer)--\n");
    for (i = 2; i >= 0; i--)
        printf(" %d%s : %s\n", i + 1, getOrdinalSuffix(i + 1), p[i]);

    for (i = 0; i < 3; i++)
        free(p[i]);

    return 0;
}