#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void main()
{
	int coffee;

	printf("What coffee do you want? (1:Americano, 2:Latte, 3:Macchiato) ");
	scanf("%d", &coffee);

	printf("\n# 1. Prepare hot water.\n");
	printf("# 2. Prepare a paper cup.\n");

	switch (coffee)
	{
	case1:printf("# 3. Make americano.\n"); break;
	case2:printf("# 3. Make latte.\n"); break;
	case3:printf("# 3. Make macchiato.\n"); break;
	default:printf("# 3. Make any coffee. \n"); break;
	}
	printf("# 4. Pour water.\n");
	printf("# 5. Stir with a spoon to dissolve.\n\n ");

	printf("Here's the coffee~ \n\n");
}