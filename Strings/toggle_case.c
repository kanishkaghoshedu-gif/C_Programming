#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* toggle_case(char s[]){
    static char s1[100];
    char temp[2];

    s1[0] = '\0';

    for(int i = 0; s[i] != '\0'; i++){
        if(islower(s[i]))
            temp[0] = toupper(s[i]);
        else
            temp[0] = tolower(s[i]);

        temp[1] = '\0';
        strcat(s1, temp);
    }

    return s1;
}

int main(){
    char s[100];

    printf("Enter any string: ");
    scanf("%s", s);

    printf("Updated string: %s", toggle_case(s));

    return 0;
}