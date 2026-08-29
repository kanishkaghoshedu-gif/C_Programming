#include <stdio.h>

int main(){
    int arr[3][3];
    int i; int j;
    printf("Enter the elements of the 3x3 array:\n");
    for( i=0; i<3; i++) {
        for( j=0; j<3; j++) {             
            scanf("%d", &arr[i][j]);
        }   
    }
    printf("Left diagonal:\n");
     for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
            if(i==j)
    	   	printf("%d ", arr[i][j]);
            else
                printf("  ");
}
     }
     printf("\nRight diagonal:\n");
     for(i = 0; i < 3; i++){
            printf("%d ", arr[i][3 -i- 1]);
        }
    /*for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
            if(i+j==2)
    	   	printf("%d ", arr[i][j]);
            else
                printf("  ");
           }
           printf("\n");        
    }
    */ //for square matrix, right diagonal elements are those whose sum of row and column index is equal to n-1, where n is the size of the square matrix. In this case, n=3, so the right diagonal elements are those whose sum of row and column index is equal to 2.
        return 0;
    }