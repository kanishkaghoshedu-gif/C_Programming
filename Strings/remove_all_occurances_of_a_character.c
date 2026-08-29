#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* remove_all_occ(char s[], int l, char t){
    static char s1[100];
    int i, j = 0;

    for(i = 0; i < l; i++){
        if(s[i] != toupper(t) && s[i] != tolower(t)){
            s1[j++] = s[i];
        }
    }

    s1[j] = '\0';

    return s1;
}

int main(){
    char s[100];
    char t;
    printf("Enter the string: ");
    fgets(s, 100, stdin);//scanf("%s", s);
    s[strcspn(s, "\n")] = '\0';
    int l = strlen(s);

    printf("Which character to be removed: ");
    scanf("%c", &t);
    printf("Result: %s", remove_all_occ(s, l, t));

    return 0;
}