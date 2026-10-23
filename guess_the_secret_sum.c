#include <stdio.h>

void guess(int num, int t)
{
    int attempt = 1;

    do
    {
        printf("Attempt %d of 3: ", attempt);
        scanf("%d", &num);

        if (num == t)
        {
            printf("Correct!\n");
            break;
        }
        else if (num < t)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Too high!\n");
        }

        attempt++;

    } while (attempt <= 3);
}

int main()
{
    int a = 20, b = 50;
    int sum = a + b;
    int n;
    printf("Guess the secret sum\n");
    guess(n, sum);
    return 0;
}