#include <stdio.h>
#include <string.h>

void remove_duplicate(char s[], int size)
{
    char s1[100];
    int i; int freq[26] = {0};
    for(i=0; i<size; i++){
        freq[s[i]-'a']++;
    }
   int j = 0;

for (i = 0; i < 26; i++) {
    if (freq[i] > 0) {
        s1[j++] = (char)(i + 'a');
    }
}

s1[j] = '\0';
printf("%s", s1);

}

int main(){
    char s[100];
    printf("Enter the string: ");
    scanf("%s", &s);
    int size = strlen(s);
    remove_duplicate(s, size);
    return 0;
}