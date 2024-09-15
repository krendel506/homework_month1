#include <stdio.h>

int main()
{
    long distance = 384400;
    long smallestV = 365180;
    long biggestV = 403620;
    long guess = 0;

    while (1)
    {
        printf("Enter planet Earth distance from the Moon: ");
        scanf("%ld", &guess);
        if (guess == 0)
        {
            break;
        }
        else if (guess >= smallestV && guess <= biggestV)
        {
            printf("Correct input\n");
            break;
        }
        else if (guess < smallestV)
        {
            printf("The correct answer is bigger\n");
        }
        else if (guess > biggestV)
        {
            printf("The correct value is smaller\n");
        }
    }
    return 0;
}