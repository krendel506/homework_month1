#include <stdio.h>

int bestWorst(float current, float *best, float *worst);

int main()
{

    float worst = 0, best = 0, current = 0;
    float middle = 0, total = 0, avg = 0;

    printf("Input grades from 0-20: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("grade %d: ", i + 1);
        scanf("%f", &current);
        if (current >= 0 && current <= 20)
        {
            if (i == 1)
            {
                best = current;
                worst = current;
            }
            else
            {
                bestWorst(current, &best, &worst);
            }
            total = total + current;
        }
        else
        {
            printf("Incorrect number, value should be between 0 and 20\n");
        }
    }

    middle = total - best;
    middle = middle - worst;
    avg = middle / 3;
    printf("Average score is %.1f\n", avg);
}

int bestWorst(float current, float *best, float *worst)
{
    if (current > *best)
    {
        *best = current;
    }
    else if (current < *worst)
    {
        *worst = current;
    }
    return 0;
}