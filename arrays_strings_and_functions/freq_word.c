#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int freq[256] = {0};
    int i = 0;

    char words[100][50];

    char *token = strtok(sentence, " ,.?\t\n");

    while (token != NULL) {
        strcpy(words[i], token);
        i++;

        token = strtok(NULL, " ,.?\t\n");
    }

    // Count frequency of each word
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            if (strcmp(words[j], words[k]) == 0) {
                freq[j]++;
            }
        }
    }

    // Print each unique word only once
    for (int j = 0; j < i; j++) {
        int alreadyPrinted = 0;

        for (int k = 0; k < j; k++) {
            if (strcmp(words[j], words[k]) == 0) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (!alreadyPrinted) {
            printf("Frequency of %s: %d\n", words[j], freq[j]);
        }
    }

    return 0;
}