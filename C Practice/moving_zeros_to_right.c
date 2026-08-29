#include <stdio.h>

int* updated_array(int arr[], int n){
    int i,j=0;
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
        for(i=j;i<n;i++)
         {
            arr[i]=0;
         }

         return arr;
    
}



int main(){
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int *a=updated_array(arr, n);
    printf("[");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
        if(i != n - 1){
            printf(",");
        }
    }
    printf("]");

    return 0;
}