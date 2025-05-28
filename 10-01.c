#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int coffee;

    printf("Which coffee would you like? (1: Regular, 2: Sugar, 3: Black) -> ");
    scanf("%d", &coffee);

    printf("\n#1. Prepare hot water\n");
    printf("#2. Prepare a paper cup\n");

    switch (coffee)
    {
    case 1: printf("#3. Add regular coffee\n"); break;
    case 2: printf("#3. Add sugar coffee\n"); break;
    case 3: printf("#3. Add black coffee\n"); break;
    default: printf("#3. Do nothing\n"); break;
    }

    printf("#4. Pour water\n");
    printf("#5. Stir with a spoon\n\n");

    printf("Here is your coffee.\n\n");
}