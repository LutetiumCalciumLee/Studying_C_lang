#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int coffee_machine(int button)
{
    printf("\n#1. (Auto) Prepare hot water\n");
    printf("#2. (Auto) Prepare a paper cup\n");

    switch (button)
    {
    case 1: printf("#3. (Auto) Add regular coffee\n"); break;
    case 2: printf("#3. (Auto) Add sugar coffee\n"); break;
    case 3: printf("#3. (Auto) Add black coffee\n"); break;
    default: printf("#3. (Auto) Do nothing\n"); break;
    }

    printf("#4. (Auto) Pour water\n");
    printf("#5. (Auto) Stir with a spoon\n\n");

    return 0;
}

void main()
{
    int coffee;
    int ret;

    printf("Which coffee would you like? (1: Regular, 2: Sugar, 3: Black) ");
    scanf("%d", &coffee);

    ret = coffee_machine(coffee);

    printf("Here is your coffee.\n\n");
}