#include <stdio.h>

// duplicate check
int is_duplicate(int arr[], int i){
    for(int k = 0; k < i; k++){
        if(arr[k] == arr[i])
            return 1;
    }
    return 0;
}


void print_even_odd_unique(int arr[], int n){
    printf("[");

    // even first
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0 && !is_duplicate(arr, i)){
            printf("%d,", arr[i]);
        }
    }

    // odd next
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0 && !is_duplicate(arr, i)){
            printf("%d,", arr[i]);
        }
    }

    printf("\b]");  // remove last comma
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    print_even_odd_unique(arr, n);

    return 0;
}