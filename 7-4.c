#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int a, b;
	char c;

	while(1) {
		printf("��� �� �� ���� �Է� (���߷��� Ctrl + C) : ");
		scanf(" %d %d",&a,&b);


		printf("��� �� �����ڸ� �Է� (���߷��� Ctrl + C) : ");
		scanf(" %c", &c);

		switch (c) {
		case '+' :
			printf("%d + %d = %d �Դϴ�. \n", a, b, a+b);
			break;

		case '-' :
			printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
			break;

		case '*':
			printf("%d X %d = %d �Դϴ�. \n", a, b, a * b);
			break;

		case '/':
			printf(" %d / %d = %0.3f �Դϴ�. \n", a, b, (float)a / b);
			break;

		case '%':
			printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
			break;

		default :
			printf("�߸� �Է��ϼ̽��ϴ�. \n\n");

		}
	}
}