#include <stdio.h>

int main() {
    int i, j , rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    //type 1
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);}
        printf("\n");}
    //type 2
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
      
return 0;
}