#include <stdio.h>
#include <string.h>
int main(){
    int frq[256] = {0};
    char str[1000];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
{
    frq[str[i]]++;
}
    printf("Digit frequencies in the string:\n");
    for (i = '0'; i <= '255'; i++)
{
   if (i >= '0' && i <= '9')
    printf("%d ", frq[i]);

}
    return 0;
}