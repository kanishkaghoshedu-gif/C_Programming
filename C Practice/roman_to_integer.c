#include <stdio.h>

int value(char c)
{
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;

    return 0;
}

int romanToInt(char s[])
{
    int i;
    int sum = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(value(s[i]) < value(s[i + 1]))
            sum = sum - value(s[i]);
        else
            sum = sum + value(s[i]);
    }

    return sum;
}

int main()
{
    char s[20];

    printf("Enter Roman numeral: ");
    scanf("%s", s);

    printf("Integer = %d\n", romanToInt(s));

    return 0;
}