
#include <stdio.h>
#include <stdbool.h>

/*bool isIsomorphic(char s[], char t[])
{
    int i, j;

    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i + 1; s[j] != '\0'; j++)
        {
            if(s[i] == s[j] && t[i] != t[j])
                return false;

            if(s[i] != s[j] && t[i] == t[j])
                return false;
        }
    }

    return true;
}*/
bool isIsomorphic(char s[], char t[])
{
    int freq[256] = {0};
    int used[256] = {0};
    int i;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(freq[(unsigned char)s[i]] == 0)
        {
            if(used[(unsigned char)t[i]] == 1)
                return false;

            freq[(unsigned char)s[i]] = t[i];
            used[(unsigned char)t[i]] = 1;
        }
        else
        {
            if(freq[(unsigned char)s[i]] != t[i])
                return false;
        }
    }

    return true;
}

int main()
{
    char s[20], t[20];

    printf("String1: ");
    scanf("%s", s);

    printf("String2: ");
    scanf("%s", t);

    if(isIsomorphic(s, t))
        printf("Isomorphic");
    else
        printf("Not Isomorphic");

    return 0;
}

