#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* remove_duplicate(char s[], int size)
{
    static char s1[100];
    int i;
    int freq[26] = {0};

    for(i = 0; i < size; i++){
        freq[s[i] - 'a']++;
    }

    int j = 0;

    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            s1[j++] = (char)(i + 'a');
        }
    }

    s1[j] = '\0';
    return s1;
}

char* create_palindrome(char s1[], int s)
{
    static char result[100];
    char rev[100];
    int i, len;

    len = strlen(s1);

    rev[0] = '\0';

    for(i = len - 2; i >= 0; i--)
    {
        char temp[2];

        temp[0] = s1[i];
        temp[1] = '\0';

        strcat(rev, temp);
    }

    strcpy(result, s1);
    strcat(result, rev);

    return result;
}

bool is_Palin(char s[], int size)
{
    int i, j;

    for(i = 0, j = size - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
            return false;
    }

    return true;
}

void is_Palindrome(char s[], int size)
{
    int i;
    char s1[20];
    s1[0] = '\0';

    for(i = 0; i < size; i++){
        if(s[i] == ' ' || s[i] == '\n'){
            int s = strlen(s1);

            if(s > 0)
            {
                if(is_Palin(s1,s))
                    printf("%s\n", s1);
                else
                {
                    char *result;

                    result = remove_duplicate(s1, s);

                    printf("%s\n",
                           create_palindrome(result, strlen(result)));
                }
            }

            s1[0] = '\0';
        }
        else {
            char temp[2];

            temp[0] = s[i];
            temp[1] = '\0';

            strcat(s1, temp);
        }
    }

    /* Last word if there is no newline */
    if(strlen(s1) > 0)
    {
        int s = strlen(s1);

        if(is_Palin(s1, s))
            printf("%s\n", s1);
        else
        {
            char *result;

            result = remove_duplicate(s1, s);

            printf("%s\n",
                   create_palindrome(result, strlen(result)));
        }
    }
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int size = strlen(s);

    is_Palindrome(s, size);

    return 0;
}