#include <stdio.h>
#include <string.h>

void longest_word(char s[], int size){
     int i,j=0;
    char s1[20];
    char str[5][100];
    s1[0] = '\0';   // initialize

    for(i = 0; i < size; i++){
        if(s[i] == ' ' || s[i] == '\n'){
          
          strcpy(str[j++], s1);
           //printf("%s\n", s1);
            s1[0] = '\0';   // reset
        }
        else {
            char temp[2];
            temp[0] = s[i];
            temp[1] = '\0';
            strcat(s1, temp);
        }
    }
    printf("String array:\n");
     
    int max = 0;
    
    int index = 0;
    for (int i = 0; i < j; i++) {
        //printf("%s\n", str[i]);
       
        if (strlen(str[i]) > max) {
            max = strlen(str[i]);
            index = i;
        }
    }

    printf("Longest word: %s\n", str[index]);
    
    
}



int main(){
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int size = strlen(s);
    longest_word(s, size);
    return 0;
}

