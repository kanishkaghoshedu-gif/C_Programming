#include <stdio.h>

int main() {
    int i, j;

    for(i = 3; i <= 7; i++) {
        for(j = 3; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}