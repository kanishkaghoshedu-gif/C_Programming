#include<stdio.h>

int sumOfElements(int *arr, int size){
    int sum = 0;
    for(int i =0 ; i< size; i++){
        sum += *(arr + i);
    }
    return sum;
}

int main(){
    int arr[5], i, sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    sum = sumOfElements(arr, size);
    printf("Sum of elements: %d", sum);
    return 0;
}