#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {

    // 1. Remove leading spaces
    int i = 0, j = 0;

    while (s[i] == ' ') i++;

    while (s[i] != '\0') {
        s[j++] = s[i++];
    }
    s[j] = '\0';

    // 2. Remove trailing spaces
    int len = strlen(s);

    while (len > 0 && s[len - 1] == ' ') {
        len--;
    }
    s[len] = '\0';

    // 3. Your original reverse scan logic
    int lastWordLength = 0;

    for (int k = len - 1; k >= 0; k--) {
        if (s[k] == ' ') break;
        lastWordLength++;
    }

    printf("Length of the last word: %d\n", lastWordLength);
    return lastWordLength;
}
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    lengthOfLastWord(str);
    return 0;
}

