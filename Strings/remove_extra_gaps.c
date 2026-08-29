#include <stdio.h>
#include <string.h>

char* remove_extra_gaps(char s[]){
    int i; int space;
    for(i=0; s[i]!='\0'; i++)
    { 
        if(s[i]!=' '){
            printf("%c", s[i]);
            space = 0;
        }
        
        else if(space==0){
            printf(" ");
            space = 1;
        }
    }
}


int main(){
    char s[100];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    remove_extra_gaps(s);
    return 0;
}

/*int main(){
    char str[100];
    int i, space = 0;

    printf("Enter a sentence: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    { 
        if(str[i]!=' '){
            printf("%c", str[i]);
            space = 0;
        }
        
        else if(space==0){
            printf(" ");
            space = 1;
        }
    }
    return 0;
}*/