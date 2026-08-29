#include <stdio.h>

int main()
{
    char s1[] = "Chinese";
    char s2[] = "Checkers";
    char s[50] = "";
    int k = 0;

    int visited[256] = {0};

    for(int i = 0; s1[i] != '\0'; i++)
    {
        for(int j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j] && visited[(unsigned char)s1[i]] == 0)
            {
                s[k++] = s1[i];
                visited[(unsigned char)s1[i]] = 1;
                break;
            }
        }
    }

    s[k] = '\0';

    printf("%s", s);

    return 0;
}