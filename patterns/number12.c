#include <stdio.h>

int main() {
    int i, j;

    for(i = 9; i >= 1; i-=2) {
    for(j  = 1;  j <=5; j++)
    {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}