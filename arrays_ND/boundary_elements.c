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
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
            if(i==0 || i==2 || j==0 || j==2)
    	   	printf("%d ", arr[i][j]);
            else
                printf("  ");
           }
           printf("\n");        
    }
}