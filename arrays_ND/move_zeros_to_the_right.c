#include <stdio.h>

int main(){
    int arr[100];
    int i,j;
    printf("Enter the elements: ");
    for(i=0;i<100;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<100;i++){
        if(i!=0){
            arr[j++] = arr[i];
        }
    }
    while(j<100){
        arr[j++] = 0;
    }

    for(i=0;i<100;i++){
        printf("%d", arr[i]);
    }

}
