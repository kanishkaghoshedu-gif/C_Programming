#include <stdio.h>

int* swap_first_and_last_digits(int arr[], int size){
    int t = arr[size-1];
    arr[size-1] = arr[0];
    arr[0] = t;
    return arr;
}

int main(){
    int size, num, i=0;
    printf("Enter the number: ");
    scanf("%d", &num);

    int arr[20];   // increased size

    if(num == 0){  // handle 0 case
        arr[i++] = 0;
    }

    while(num != 0){
        int d = num % 10;
        arr[i++] = d;
        num /= 10;
    }

    int *p = swap_first_and_last_digits(arr, i);

    for(int j = i; j > 0; j--){
        printf("%d", p[j-1]);   // fixed index
    }

    return 0;
}