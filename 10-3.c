#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int coffee_machine(int button)
{
	printf("\n# 1. (automatcally) Prepare hot water.\n");
	printf("# 2. (automatically) Prepare paper cup.\n");

	switch (button)
	{
	case 1: printf("# 3. (automatically) Make americano.\n"); break;
	case 2: printf("# 3. (automatically) Make latte.\n"); break;
	case 3: printf("# 3. (automatically) Make macchiato.\n"); break;
	default: printf("# 3. (automatically) Make any coffee.\n"); break;
	}

	printf("# 4. (automatically) Pour water.\n");
	printf("# 5. (automatically) Stir with a spoon to dissolve.\n\n ");

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("A, what coffee do you want? (1:Americano, 2:Latte, 3:Macchiato) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A, here's the coffee~ \n\n");

	printf("B, what coffee do you want ? (1:Americano, 2 : Latte, 3 : Macchiato) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("B,here's the coffee~ \n\n");

	printf("C, what coffee do you want ? (1:Americano, 2 : Latte, 3 : Macchiato) ");
	scanf("%d", &coffee);
	printf("C, here's the coffee~ \n\n");
	ret = coffee_machine(coffee);
}