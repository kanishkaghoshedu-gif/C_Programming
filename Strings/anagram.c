#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char s1[], char s2[]){
    int i,j;
     int freq1[26] = {0}; int freq2[26] ={0};
    for(i=0,j=0; s1[i]!='\0' || s2[j]!='\0'; i++, j++){
        freq1[s1[i] - 'a']++;
        freq2[s2[j] - 'a']++;
    }
    for(i = 0; i<26; i++){
        if(freq1[i] != freq2[i])
        return false;
    }
    return true;

}


int main(){
    char s1[100];
    char s2[100];
    printf("Enter a string1: ");
    scanf("%s", &s1);
    printf("Enter the string2: ");
    scanf("%s", &s2);
    if(isAnagram(s1,s2))
    printf("Both are Anagaram. ");
    else
    printf("Not Anagram");
    return 0;
}