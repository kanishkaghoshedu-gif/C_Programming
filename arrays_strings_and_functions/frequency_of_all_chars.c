#include <stdio.h>
#include <string.h>
int main(){
    int frq[256] = {0};
    char str[1000];
    int i;
    printf("Enter a sentence:");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
{   if (str[i] != ' ' && str[i] != '\n'){ // Exclude spaces and newlines from the frequency count
    frq[str[i]]++;}
}
    for (i = 0; i < 256; i++)
{
    if (frq[i] > 0)
    {
        printf(" frequency of %c: %d \n", i, frq[i]);
    }
}
    return 0;
}