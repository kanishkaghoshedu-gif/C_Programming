#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {
        for(j = i; j >= 1; j--) {
           printf("%d", j);
        }
        printf("\n");
    }
    //alt.
    /*for(i = 1; i <= rows; i++){
        for(j = rows; j >= i; j--){
                printf("%d", j);
            }
        printf("\n");
    }*/

    return 0;
}