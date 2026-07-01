#include <stdio.h>

int trib(int a, int b, int c,int n)
{
    if (n == 0)
        return a;

    return trib(b, c, a + b + c, n - 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Nth tribonacci term = %d\n", trib(1, 2, 3,n-1));

    return 0;
}

