#include <stdio.h>

int main(){
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    // Print the star pattern
    /*for(i = 1; i<= rows; i++){
        for(j = 1; j<= i; j++){
            printf("* ");
        }
        printf("\n");
    }*/
    //reverse star pattern
    for(i = rows; i>= 1; i--){
        for(j = 1; j<= i; j++){
            printf("* ");
        }
        printf("\n");
    }

       
    return 0;
}