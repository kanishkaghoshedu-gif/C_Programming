#include <stdio.h>

int* updated_array(int arr[], int n){
   int temp[n];
    int pos = 0, neg = 1;
    int i;

    for(i = 0; i < n; i++){
        if(arr[i] >= 0 && pos < n){
            temp[pos] = arr[i];
            pos += 2;
        }
        else if(arr[i] < 0 && neg < n){
            temp[neg] = arr[i];
            neg += 2;
        }
    }

    // Copy back
    for(i = 0; i < n; i++){
        arr[i] = temp[i];
    }
         return arr;
         /* int i, j;

    for(i = 0; i < n; i++){
        
        // Even index → should be positive
        if(i % 2 == 0 && arr[i] < 0){
            for(j = i + 1; j < n; j++){
                if(arr[j] >= 0){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }

        // Odd index → should be negative
        else if(i % 2 == 1 && arr[i] >= 0){
            for(j = i + 1; j < n; j++){
                if(arr[j] < 0){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }*/
    
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