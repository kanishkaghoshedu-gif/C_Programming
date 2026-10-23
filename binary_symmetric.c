#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Decimal to binary conversion
void decimal_to_binary(int num, char bin[])
{
    if (num == 0)
    {
        bin[0] = '0';
        bin[1] = '\0';
        return;
    }

    if (num < 0)
    {
        printf("-");
        num = -num;
    }

    int i = 0;
    int temp[32];

    while (num > 0)
    {
        temp[i++] = num % 2;
        num = num / 2;
    }

    int j;

    for (j = i - 1; j >= 0; j--)
    {
        bin[i - 1 - j] = temp[j] + '0';
    }

    bin[i] = '\0';

    printf("Binary equivalent = %s\n", bin);
}

// Count 0s and 1s
int count(char bin[])
{
    int c = 0, c1 = 0, c2 = 0;
    int i = 0;

    while (bin[i] != '\0')
    {
        c++;

        if (bin[i] == '0')
            c1++;

        if (bin[i] == '1')
            c2++;

        i++;
    }

    printf("No. of digits: %d\n", c);
    printf("No of 0s: %d\n", c1);
    printf("No of 1s: %d\n", c2);

}

// Palindrome string
bool palindrome(char bin[])
{
    int i, len;

    len = strlen(bin);

    for (i = 0; i < len / 2; i++)
    {
        if (bin[i] != bin[len - 1 - i])
            return false;
    }

    return true;
}

int main()
{
    char bin[32];
    int n;
    

    printf("Enter a number: ");
    scanf("%d", &n);

    decimal_to_binary(n, bin);

    count(bin);
    if (palindrome(bin))
        printf("Binary symmetric number.");
    else
        printf("Not a binary symmetric number.");

    return 0;
}