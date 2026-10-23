#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* create_palindrome(char s1[], int s){
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
void is_Palindrome(char s[], int size){
    int i;
    char s1[20];
    s1[0] = '\0';   // initialize

    for(i = 0; i < size; i++){
        if(s[i] == ' ' || s[i] == '\n'){
            int s =strlen(s1);
            if(is_Palin(s1,s))
           printf("%s\n", s1);
           else
           printf("%s\n", create_palindrome(s1, s));
            s1[0] = '\0';   // reset
        }
        else {
            char temp[2];
            temp[0] = s[i];
            temp[1] = '\0';
            strcat(s1, temp);
        }
    }
}



int main(){
        char w[100];
        printf("Enter a word: ");
        scanf("%c", &w);
        create_palindrome();
        return 0;
    }