#include <stdio.h>

int main() {
    int arr[4][3];
    int i; int j;
    printf("Enter the elements of the 4x3 array:\n");
    for( i=0; i<4; i++) {
        for( j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    /*for(i=0; i<4; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    */
    
    int sum_of_rows=0;
    
    for(i=0;i<4;i++){
    	sum_of_rows= 0;
    	   for(j=0;j<3;j++){
    	   	printf("%d ", arr[i][j]);
    	   	 sum_of_rows+= arr[i][j];
		   }
		  printf("sum = %d\n", sum_of_rows); 
	}
	
}
	
 
   
        