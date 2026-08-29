#include <stdio.h>

int mySqrt(int x)
{
    int i;

    for(i = 1; i <= x; i++)
    {
        if((long long)i * i == x)
            return i;

        if((long long)i * i > x)
            return i - 1;
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter any number = ");
    scanf("%d", &n);

    printf("Square root of %d = %d\n", n, mySqrt(n));

    return 0;
}