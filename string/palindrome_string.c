#include <stdio.h>
#include <string.h>
#include <stdbool.h>
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
            s1[0] = '\0';   // reset
        }
        else {
            char temp[2];
            temp[0] = s[i];
            temp[1] = '\0';
            strcat(s1, temp);
        }
    }

    // print last word if any
    /*if(strlen(s1) > 0){
        printf("%s", s1);
    }*/
}

int main(){
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int size = strlen(s);   // correct size
    is_Palindrome(s, size);

    return 0;
}